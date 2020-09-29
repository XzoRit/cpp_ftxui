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

using namespace ftxui;

namespace po = boost::program_options;

class Text : public Component
{
  private:
    Element Render() override
    {
        return window(text(L"Title"), text(L"content"));
    }
};

class PwdInput : public Component
{
  public:
    PwdInput()
    {
        Add(&container);
        container.Add(&in);

        in.placeholder = L"input password";
        in.on_change = [this] {
            const auto a{in.content};
            in.content.assign(a.size(), '*');
        };
    }

  private:
    Element Render() override
    {
        return vbox({hbox({text(L" password: "), in.Render()})}) | border;
    }

    Container container{Container::Horizontal()};
    Input in;
};

class Tab : public Component
{
    Toggle tab_selection{};

    Text text_component{};
    PwdInput pwd_in{};

    Container main_container{Container::Vertical()};
    Container container{Container::Tab(&tab_selection.selected)};

  public:
    Tab()
    {
        Add(&main_container);

        tab_selection.entries = {L"protected", L"change"};
        main_container.Add(&tab_selection);

        container.Add(&pwd_in);
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
};

int main(int ac, char* av[])
{
    std::cout << "Hello app\n";

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
