#include "Unit.h"

Unit::Unit() { 
	m_name = "";
	m_unit_type = 0;
	m_atk_dmg = 0;
	m_atk_speed = 0;
	m_atk_range = 0;
	m_move_speed = 0;
}

Unit::Unit(std::string p_name, int p_type, double p_atk_dmg, int p_atk_speed, double p_atk_range, double p_move_speed) {
	m_name = p_name;
	m_unit_type = p_type;
	m_atk_dmg = p_atk_dmg;
	m_atk_speed = p_atk_speed;
	m_atk_range = p_atk_range;
	m_move_speed = p_move_speed;
}

std::string Unit::get_name() {	//get unit name, only using for printing unit name
	return m_name;
}

int Unit::get_type() {	//get unit type
	return m_unit_type;
}

double Unit::get_atk_dmg() {	//get attack damage
	return m_atk_dmg;
}

int Unit::get_atk_speed() {	//get attack speed (ms)
	return m_atk_speed;
}

double Unit::get_atk_range() {	//get attack range
	return m_atk_range;
}

double Unit::get_move_speed() {	//get movement speed
	return m_move_speed;
}