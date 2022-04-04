#include "DeleteUnitMenu.h"

DeleteUnitMenu::DeleteUnitMenu() : Menu(0, 3) {  }

void DeleteUnitMenu::print_menu() {
	std::cout << "Delete Barbarian(1)" << std::endl;
	std::cout << "Delete Archer(2)" << std::endl;
	std::cout << "Delete Wizard(3)" << std::endl;
	std::cout << "Back(0)" << std::endl;

	std::cout << "Selection : ";
}