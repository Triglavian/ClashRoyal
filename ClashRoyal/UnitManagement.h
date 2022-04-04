#pragma once
#include <vector>
#include <algorithm>
#include "Archer.h"
#include "Barbarian.h"
#include "Wizard.h"

class UnitManagement {
private:
	std::vector<Barbarian*> barbarian;
	std::vector<Archer*> archer;
	std::vector<Wizard*> wizard;
public:
	UnitManagement();
	void add_unit(int);				//add a selected unit
	void delete_unit(int);			//delete a selected unit
	//template <class UnitType>
	//void delete_selected_unit(UnitType unit_type);	//release last unit data
	void delete_barbarian();		//delete a barbarian
	void delete_archer();			//delete a archer
	void delete_wizard();			//delete a wizard
	void release_archers();			//delete all barbarians
	void release_barbarians();		//delete all archers
	void release_wizards();			//delete all wizards
	void print_all_units();			//print all units
	~UnitManagement();
};