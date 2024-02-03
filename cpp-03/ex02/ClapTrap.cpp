//
// Created by sgurb on 1.02.2024.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknown") {
	std::cout << "Default constructor is running." << std::endl;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Name constructor is running." << std::endl;
	this->_name = name;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "Copy constructor is running." << std::endl;
	this->_name = copy._name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = copy._name;
	this->attackDamage = copy.attackDamage;
	this->energyPoints = copy.energyPoints;
	this->hitPoints = copy.hitPoints;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	if (this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy points for attack!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " is died.." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " was attacked, causing " << amount << " points of damage!" << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " has no energy points for repair!" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " repaired, increased " << amount << " points of hit." << std::endl;
	this->hitPoints += amount;
	this->energyPoints--;
}

std::string ClapTrap::getName(void) {
	return (this->_name);
}

unsigned int ClapTrap::getAttackDamage(void) {
	return (this->attackDamage);
}