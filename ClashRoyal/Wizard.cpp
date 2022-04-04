#include "Wizard.h"

Wizard::Wizard() : Unit("Wizard", TYPE_WIZARD, 80.2, 1350, 2.5, 2.2) {
	//Is it better by using parent class constructor with params?
	m_name = "Wizard";
	m_unit_type = TYPE_WIZARD;
	m_atk_dmg = 80.2;
	m_atk_speed = 1.35;
	m_atk_range = 2.5;
	m_move_speed = 2.2;
}