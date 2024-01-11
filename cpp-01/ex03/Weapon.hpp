//
// Created by sgurb on 1/2/2024.
//

#ifndef CPP_MODULES_WEAPON_HPP
#define CPP_MODULES_WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string type;
public:
	const std::string &getType();
	void	setType(std::string type);
	Weapon(std::string type);
};


#endif //CPP_MODULES_WEAPON_HPP
