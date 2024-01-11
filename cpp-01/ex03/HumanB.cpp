//
// Created by sgurb on 1/2/2024.
//

#include "HumanB.hpp"

void HumanB::attack() {
	std::cout << this->name << " with their " << this->weapon.getType() << std::endl;
}

HumanB::HumanB(std::string name) : weapon("HAND") {
	this->name = name;
	this->weapon = weapon;
}

void HumanB::setWeapon(Weapon weapon) {
	this->weapon = weapon;
}