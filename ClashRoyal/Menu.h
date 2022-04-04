#pragma once
#include <iostream>

class Menu {
protected:
	int min_selection_value;	//minimun selection value
	int max_selection_value;	//maximum selection value	
	Menu();
	Menu(int, int);
	virtual void print_menu() = 0;	//print member menu, need definition
	int get_number_in_range();		//return a number between param1 and param2
	inline bool is_in_range(int, int, int);	//validate param3 is between param1 and param2
public:
	int get_menu_selection();		//return selected menu
};