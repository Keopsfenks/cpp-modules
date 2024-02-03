//
// Created by sgurb on 1.02.2024.
//

#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap a("Hüseyin");
	ScavTrap b("Şükrü");

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(a.getAttackDamage());
}