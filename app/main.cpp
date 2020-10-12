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

        in.placeholder = L"input password";
        in.on_change = [this] { raw = std::exchange(in.content, std::wstring(in.content.size(), L'*')); };
    }

    std::wstring raw;

    Element Render() override
    {
        return vbox({hbox({text(L" password: "), in.Render()})});
    }

  private:
    Input in;
};

class ChangePwdDlg : public Component
{
  public:
    ChangePwdDlg()
    {
        Add(&container);

        container.Add(&old_pwd);
        container.Add(&new_pwd);
        container.Add(&confirm_pwd);
    }

  private:
    Element Render() override
    {
        return border(vbox(old_pwd.Render(), new_pwd.Render(), confirm_pwd.Render()));
    }

    Container container{Container::Vertical()};
    PwdInput old_pwd;
    PwdInput new_pwd;
    PwdInput confirm_pwd;
};

class ProtectedDlg : public Component
{
  public:
    ProtectedDlg()
    {
        Add(&container);

        container.Add(&pwd);
    }

  private:
    Element Render() override
    {
        return border(pwd.Render());
    }

    Container container{Container::Vertical()};
    PwdInput pwd;
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
            container.Render() | flex,
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

    {
        auto screen = ScreenInteractive::Fullscreen();

        Tab tab{};
        screen.Loop(&tab);
    }

    return 0;
}
