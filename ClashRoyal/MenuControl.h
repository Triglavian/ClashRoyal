#pragma once
#include <iostream>
#include <conio.h>
#include "MainMenu.h"
#include "AddMenu.h"
#include "DeleteUnitMenu.h"
#include "UnitManagement.h"
#include <Windows.h>

class MenuControl {
private:
	MainMenu* main_menu;
	AddMenu* add_menu;
	DeleteUnitMenu* delete_menu;
	std::string str_clear_window;
	COORD cursor_pos;
public:
	MenuControl();
	~MenuControl();
	bool load_main_menu(UnitManagement*);		//print main menu
	void load_add_menu(UnitManagement*);		//print addition unit menu
	void load_delete_menu(UnitManagement*);		//print deletion menu
	void clear_window();						//clear console window
	void set_cursor_pos(int, int);				//set cursor to {param1, param2}
	void pause();								//pause screen to get any key
};