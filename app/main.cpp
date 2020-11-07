#include <ftxui/component/container.hpp>
#include <ftxui/component/input.hpp>
#include <ftxui/component/menu.hpp>
#include <ftxui/component/radiobox.hpp>
#include <ftxui/component/screen_interactive.hpp>
#include <ftxui/component/toggle.hpp>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>

#include <boost/program_options.hpp>

#include <iostream>
#include <utility>

using namespace ftxui;

namespace po = boost::program_options;

class PwdInput : public Component
{
  public:
    PwdInput()
    {
        Add(&in);

        in.on_change = [this] { onChange(); };
        in.on_enter = [this] { OnEnter(); };
    }

    std::wstring placeholder;
    std::wstring raw;
    std::function<void()> on_enter = [] {};

    Element Render() override
    {
        in.placeholder = placeholder;
        return in.Render();
    }

  private:
    void onChange()
    {
        raw.push_back(in.content.back());
        raw.resize(in.content.size());
        in.content.replace(in.content.size() - 1, 1, L"*");
    }

    void OnEnter()
    {
        on_enter();
    }

    Input in;
};

class ChangePwdDlg : public Component
{
  public:
    ChangePwdDlg()
    {
        Add(&container);

        container.Add(&current_pwd);
        container.Add(&new_pwd);
        container.Add(&confirm_pwd);

        current_pwd.placeholder = L"current";
        new_pwd.placeholder = L"new";
        confirm_pwd.placeholder = L"confirm";
    }

  private:
    Element Render() override
    {
        return border(hbox(vbox(text(L"current password: "), text(L"new password: "), text(L"confirm password: ")),
                           vbox(current_pwd.Render(), new_pwd.Render(), confirm_pwd.Render())));
    }

    Container container{Container::Vertical()};
    PwdInput current_pwd;
    PwdInput new_pwd;
    PwdInput confirm_pwd;
};

class ProtectedDlg : public Component
{
  public:
    ProtectedDlg()
        : raw_pwd{text(L"")}
    {
        Add(&container);

        container.Add(&pwd);

        pwd.on_enter = [this] { raw_pwd = text(pwd.raw); };
        pwd.placeholder = L"password";
    }

  private:
    Element Render() override
    {
        return border(hbox(vbox(text(L"enter password: "), text(L"clear text: ")), vbox(pwd.Render(), raw_pwd)));
    }

    Container container{Container::Vertical()};
    PwdInput pwd{};
    Element raw_pwd{};
};

class Tab : public Component
{
  public:
    Tab()
    {
        Add(&main_container);

        tab_selection.entries = {L"protected", L"change"};
        main_container.Add(&tab_selection);

        container.Add(&protected_dlg);
        container.Add(&text_component);
        main_container.Add(&container);
    }

    Element Render() override
    {
        return vbox({
            text(L"Application") | bold | hcenter,
            tab_selection.Render() | hcenter,
            container.Render(),
        });
    }

  private:
    Toggle tab_selection{};

    ChangePwdDlg text_component{};
    ProtectedDlg protected_dlg{};

    Container main_container{Container::Vertical()};
    Container container{Container::Tab(&tab_selection.selected)};
};

int main(int ac, char* av[])
{
    try
    {
        po::options_description desc("Allowed options");
        desc.add_options()("help", "produce help message");

        po::variables_map vm;
        po::store(po::parse_command_line(ac, av, desc), vm);
        po::notify(vm);

        if (vm.count("help"))
        {
            std::cout << desc << "\n";
            return 0;
        }
        {
            auto screen = ScreenInteractive::Fullscreen();

            Tab tab{};
            screen.Loop(&tab);
        }
    }
    catch (const std::exception& e)
    {
        std::cerr << "error: " << e.what() << "\n";
        return 1;
    }
    catch (...)
    {
        std::cerr << "Exception of unknown type!\n";
    }

    return 0;
}
