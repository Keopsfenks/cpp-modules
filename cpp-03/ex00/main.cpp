//
// Created by sgurb on 1.02.2024.
//

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap a;
	ClapTrap acopy(a);
	ClapTrap c("Semih");
	ClapTrap d;

	d = c;

	a.attack(c.getName());
	c.takeDamage(a.getAttackDamage());
	std::cout << "Copy constructer Name Test: "<< acopy.getName() << std::endl;
	std::cout << "Copy assignment Name Test: "<< d.getName() << std::endl;
}