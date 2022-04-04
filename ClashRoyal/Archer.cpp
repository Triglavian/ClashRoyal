#include "Archer.h"

Archer::Archer() : Unit("Archer", TYPE_ARCHER, 16.0, 800, 2.5, 2.8) {	
	//Is it better by using parent class constructor with params?
	m_name = "Archer";
	m_unit_type = TYPE_ARCHER;
	m_atk_dmg = 16.0;
	m_atk_speed = 800;
	m_atk_range = 2.5;
	m_move_speed = 2.8;
}