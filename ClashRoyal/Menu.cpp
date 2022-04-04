#include "Menu.h"

Menu::Menu() {
	min_selection_value = 0;
	max_selection_value = 0;
}

Menu::Menu(int p_min_val, int p_max_val) {	//set each menu's selection range
	min_selection_value = p_min_val;
	max_selection_value = p_max_val;
}

int Menu::get_number_in_range() {	//return a number between param1 and param2
	//return a number between min_val and max_val
	int selection = -1;
	print_menu();
	std::cin >> selection;
	//return selection if the selection is between with param1 and param2 and or if not, return -1
	if (is_in_range(min_selection_value, max_selection_value, selection)) return selection;
	return -1;
}

inline bool Menu::is_in_range(int p_val1, int p_val2, int p_val3) {	//validate param3 is between param1 and param2
	//validate val3 is not between val1 and val2
	return ((p_val3 >= p_val1) && (p_val3 <= p_val2));
}

int Menu::get_menu_selection() {	//return selected menu
	return get_number_in_range();	//return valid selection or return -1 if invalide selction
}