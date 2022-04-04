#include "main.h"

int main() {
	UnitManagement* unit_manager = new UnitManagement();
	MenuControl* menu_controler = new MenuControl();
	while (menu_controler->load_main_menu(unit_manager));
	delete unit_manager;
	delete menu_controler;
	return 0;
}