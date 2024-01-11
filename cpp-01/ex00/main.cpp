#include "Zombie.hpp"

int main()
{
	Zombie *zombi = newZombie("Hüseyin");
	Zombie *zombi1 = new Zombie("Şükrü");
	randomChump("Emine");
	zombi->announce();
	zombi1->announce();
	delete zombi;
	delete zombi1;
	return 1;
}