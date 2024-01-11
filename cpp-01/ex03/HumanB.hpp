//
// Created by sgurb on 1/2/2024.
//

#ifndef CPP_MODULES_HUMANB_HPP
#define CPP_MODULES_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string name;
	Weapon weapon;
public:
	void	attack();
	HumanB(std::string name);
	void	setWeapon(Weapon weapon);

};


#endif //CPP_MODULES_HUMANB_HPP
