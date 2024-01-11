//
// Created by sgurb on 1/2/2024.
//

#include "HumanA.hpp"

void HumanA::attack() {
	std::cout << this->name << " with their " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon weapon) : weapon(weapon) {
	this->name = name;
	this->weapon = weapon;
}