#include "Zombie.hpp"

Zombie* newZombie( std::string name ) {
	Zombie *zombie = new Zombie(zombieName);
	return zombie;
}