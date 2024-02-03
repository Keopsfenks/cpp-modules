//
// Created by sgurb on 1.02.2024.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->_name = "Unknown";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	this->_name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)  : ClapTrap(copy) {
	*this = copy;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
	this->_name = copy._name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
	std::cout << "ScavTrap Copy assignment called" << std::endl;

	return  (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	ClapTrap::attack(target);
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

