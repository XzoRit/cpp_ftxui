#include <lib/lib.hpp>

#include <ftxui/component/menu.hpp>
#include <ftxui/component/screen_interactive.hpp>

#include <boost/program_options.hpp>

#include <iostream>

using namespace ftxui;

namespace po = boost::program_options;

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

    auto screen = ScreenInteractive::TerminalOutput();

    Menu menu;
    menu.entries = {L"entry 1", L"entry 2", L"entry 3"};
    menu.selected = 0;
    menu.on_enter = screen.ExitLoopClosure();

    screen.Loop(&menu);

    std::cout << "Selected element = " << menu.selected << std::endl;

    return xzr::lib::add(0, 0);
}
