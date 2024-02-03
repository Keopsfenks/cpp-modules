//
// Created by sgurb on 1.02.2024.
//

#ifndef CPP_MODULES_SCAVTRAP_HPP
#define CPP_MODULES_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &copy);
	ScavTrap &operator=(const ScavTrap &copy);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate(void);
};


#endif //CPP_MODULES_SCAVTRAP_HPP
