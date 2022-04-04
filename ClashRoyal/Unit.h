#pragma once
#include <iostream>
#include <string>

enum Type{
	TYPE_BARBARAIN = 1,
	TYPE_ARCHER,
	TYPE_WIZARD,
};

class Unit {
protected:
	std::string m_name;		//unit name, only for printing unit name
	int m_unit_type;		//unit type, use instead of m_name for calculating
	double m_atk_dmg;		//attack dmg
	int m_atk_speed;		//attack speed
	double m_atk_range;		//attack range
	double m_move_speed;	//movement speed

	Unit();	//don't use
	Unit(std::string, int, double, int, double, double);	//use this with son's constructor
	std::string get_name();		//get unit name, only using for printing unit name
	int get_type();				//get unit type
	double get_atk_dmg();		//get attack damage
	int get_atk_speed();		//get attack speed (ms)
	double get_atk_range();		//get attack range
	double get_move_speed();	//get movement speed
};