//
// Created by sgurb on 1/2/2024.
//

#ifndef CPP_MODULES_HUMANA_HPP
#define CPP_MODULES_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon weapon;
public:
	void	attack();
	HumanA(std::string name, Weapon weapon);
};


#endif //CPP_MODULES_HUMANA_HPP
