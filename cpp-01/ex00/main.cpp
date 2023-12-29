#include "Zombie.hpp"

int main(void) {
	Zombie *zombie = newZombie("Zombie");
	zombie->announce();
	delete zombie;
	randomChump("Zombie");
	return 0;
}