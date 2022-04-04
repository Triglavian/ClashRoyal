#include "Barbarian.h"

Barbarian::Barbarian() : Unit("Barbarian", TYPE_BARBARAIN, 20.9, 1000, 1.0, 2.2) {	
	//Is it better by using parent class constructor with params?
	m_name = "Barbarian";
	m_unit_type = TYPE_BARBARAIN;
	m_atk_dmg = 20.0;
	m_atk_speed = 1000;
	m_atk_range = 1.0;
	m_move_speed = 2.2;
}