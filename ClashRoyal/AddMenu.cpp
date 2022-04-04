#include "AddMenu.h"

AddMenu::AddMenu() : Menu(0, 3) { }

void AddMenu::print_menu() {	//print addition unit menu	
	std::cout << "Add Barbarian(1)" << std::endl;
	std::cout << "Add Archer(2)" << std::endl;
	std::cout << "Add Wizard(3)" << std::endl;
	std::cout << "Back(0)" << std::endl;

	std::cout << "Selection : ";
}