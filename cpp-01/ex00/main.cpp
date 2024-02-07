#include "Zombie.hpp"

int main()
{
	Zombie *zombi = new Zombie("Hüseyin");
	Zombie *zombi1 = new Zombie("Şükrü");
	randomChump("Emine");
	zombi->announce();
	zombi1->announce();
	delete zombi;
	delete zombi1;
	return 1;
}