#include "MenuControl.h"

MenuControl::MenuControl() {
	main_menu = new MainMenu();
	add_menu = new AddMenu();
	delete_menu = new DeleteUnitMenu();
	str_clear_window = ' ';
	str_clear_window.append(10000, ' ');
	
}

MenuControl::~MenuControl() {
	delete main_menu;
	delete add_menu;
	delete delete_menu;
}

bool MenuControl::load_main_menu(UnitManagement* p_unit_management) {	//print main menu
	clear_window();
	switch (main_menu->get_menu_selection()) {
		case 0:
			//return false to break the inf loop
			return false;
		case 1:				
			//add a unit
			load_add_menu(p_unit_management);
			break;
		case 2:				
			//delete a wizard
			load_delete_menu(p_unit_management);
			break;
		case 3:
			//print all units and pause
			clear_window();
			p_unit_management->print_all_units();
			pause();
			break;
		default:
			//
			break;
	}
	return true;
}

void MenuControl::load_add_menu(UnitManagement* p_unit_management) {	//print addition unit menu
	clear_window();
	switch (add_menu->get_menu_selection()) {
		case 0:		
			//go back to main menu
			break;
		case 1:
			//add barbarian
			p_unit_management->add_unit(TYPE_BARBARAIN);
			break;
		case 2:
			//add archer
			p_unit_management->add_unit(TYPE_ARCHER);
			break;
		case 3:
			//add wizard
			p_unit_management->add_unit(TYPE_WIZARD);
			break;
	}
}

void MenuControl::load_delete_menu(UnitManagement* p_unit_management) {	//print deletion menu
	clear_window();
	switch (delete_menu->get_menu_selection()) {
		case 0:		
			//go back to main menu
			break;
		case 1:
			//delete barbarian
			p_unit_management->delete_unit(TYPE_BARBARAIN);
			break;
		case 2:
			//delete archer
			p_unit_management->delete_unit(TYPE_ARCHER);
			break;
		case 3:
			//delete wizard
			p_unit_management->delete_unit(TYPE_WIZARD);
			break;
	}
}

void MenuControl::clear_window() {	//clear console window
	set_cursor_pos(0, 0);
	std::cout << str_clear_window;
	set_cursor_pos(0, 0);
}

void MenuControl::set_cursor_pos(int p_x, int p_y) {	//set cursor to {param1, param2}
	cursor_pos = { (short)p_x, (short)p_y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cursor_pos);
}

void MenuControl::pause() {	//pause screen to get any key
	_getch();
}