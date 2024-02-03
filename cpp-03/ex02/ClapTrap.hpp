//
// Created by sgurb on 1.02.2024.
//

#ifndef CPP_MODULES_CLAPTRAP_HPP
#define CPP_MODULES_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string _name;
	unsigned int energyPoints;
	unsigned int attackDamage;
	unsigned int hitPoints;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	ClapTrap &operator =(const ClapTrap &copy);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string	getName(void);
	unsigned int getAttackDamage(void);

};


#endif //CPP_MODULES_CLAPTRAP_HPP
