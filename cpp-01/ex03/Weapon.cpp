//
// Created by sgurb on 1/2/2024.
//

#include "Weapon.hpp"

const std::string &Weapon::getType() {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}

Weapon::Weapon(std::string type) {
	this->type = type;
}