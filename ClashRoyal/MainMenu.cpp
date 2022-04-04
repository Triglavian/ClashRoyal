#include "MainMenu.h"

MainMenu::MainMenu() : Menu(0, 3) { }

void MainMenu::print_menu() {	//print main menu
	std::cout << "Add Unit(1)" << std::endl;
	std::cout << "Delete Unit(2)" << std::endl;
	std::cout << "Print All Units(3)" << std::endl;
	std::cout << "Exit(0)" << std::endl << std::endl;

	std::cout << "Selection : ";
}