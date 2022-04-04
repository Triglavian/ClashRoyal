#include "UnitManagement.h"

UnitManagement::UnitManagement() {
	//barbarian = new std::vector<Barbarian*>();
	//archer = new std::vector<Archer*>();
	//wizard = new std::vector<Wizard*>();
}

void UnitManagement::add_unit(int p_type) {	//add a selected unit
	switch (p_type) {
		case TYPE_BARBARAIN:
			barbarian.push_back(new Barbarian());
			break;
		case TYPE_ARCHER:
			archer.push_back(new Archer());
			break;
		case TYPE_WIZARD:
			wizard.push_back(new Wizard());
			break;
	}
}

void UnitManagement::delete_unit(int p_type) {	//delete a selected unit
	switch (p_type) {
		case TYPE_BARBARAIN:
			if (!barbarian.empty()) delete_barbarian();
			//if (barbarian.size() > 0) barbarian.pop_back();	//memory leaking
			break;
		case TYPE_ARCHER:	
			if (!archer.empty()) delete_archer();
			//if (archer.size() > 0) archer.pop_back();		//memory leaking
			break;
		case TYPE_WIZARD:
			if (!wizard.empty()) delete_wizard();
			//if (wizard.size() > 0) wizard.pop_back();		//memory leaking
			break;
	}
}

//**maybe can be encapsulation with template**//
void UnitManagement::delete_barbarian() {		//delete a barbarian
	std::vector<Barbarian*>::iterator iter = barbarian.begin();
	Barbarian*& unit = *iter;	//delete a unit container and init to nullptr //*& = pointer referencer
	if (unit == nullptr) return;	//escapse if any barbarian is not exist
	delete unit;
	unit = nullptr;
	barbarian.erase(barbarian.begin());
}

void UnitManagement::delete_archer() {	//delete a archer
	std::vector<Archer*>::iterator iter = archer.begin();	//error, use begin();
	Archer*& unit = *iter;	//delete a unit container and init to nullptr //*& = pointer referencer
	if (unit == nullptr) return;	//escapse if any archer is not exist
	delete unit;
	unit = nullptr;
	archer.erase(archer.begin());
}

void UnitManagement::delete_wizard() {	//delete a wizard
	std::vector<Wizard*>::iterator iter = wizard.begin();
	Wizard*& unit = *iter;	//delete a unit container and init to nullptr //*& = pointer referencer
	if (unit == nullptr) return;	//escapse if any wizard is not exist
	delete unit;
	unit = nullptr;	
	wizard.erase(wizard.begin());
}

//template<class UnitType>
//void UnitManagement::delete_selected_unit(UnitType unit_type) {
//	std::vector<UnitType>::iterator iter = unit_type.begin();
//	UnitType*& unit = *iter;
//	if (unit == nullptr) return;
//	delete unit;
//	unit = nullptr;
//	unit_type.erase(unit_type.begin());
//}

//****//

void UnitManagement::release_barbarians() {	//delete all barbarians
	for (Barbarian*& unit :  barbarian) {	//loop whole container
		if (unit != nullptr) {
			delete unit;	//release whole unit container and init to nullptr
			unit = nullptr;	
		}
	}
	barbarian.erase(std::remove(barbarian.begin(), barbarian.end(), nullptr), barbarian.end());
}

void UnitManagement::release_archers() {	//delete all archers
	for (Archer*& unit : archer) {	//loop whole vector
		if (unit != nullptr) {
			delete unit;	//release whole unit container and init to nullptr
			unit = nullptr;
		}
	}
	archer.erase(std::remove(archer.begin(), archer.end(), nullptr), archer.end());
}

void UnitManagement::release_wizards() {	//delete all wizards
	for (Wizard*& unit : wizard) {	//loop whole vector
		if (unit != nullptr) {
			delete unit;	//release whole unit container and init to nullptr
			unit = nullptr;
		}
	}
	wizard.erase(std::remove(wizard.begin(), wizard.end(), nullptr), wizard.end());
}

void UnitManagement::print_all_units() {	//print all units
	std::cout << "Barbairan[" << barbarian.size() << "]" << std::endl;
	std::cout << "Archer[" << archer.size() << "]" << std::endl;
	std::cout << "Wizard[" << wizard.size() << "]" << std::endl << std::endl;

	std::cout << "Press any key to continue";
}

UnitManagement::~UnitManagement() {
	release_barbarians();
	release_archers();
	release_wizards();
}