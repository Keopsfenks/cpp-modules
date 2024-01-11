//
// Created by sgurb on 1/1/2024.
//

#include "Zombie.hpp"


int main()
{
	int N = 5;
	Zombie	*zombies;

	zombies = zombieHorde(N, "sükrüs");
	for (int i = 0; i < N; i++)
		zombies[i].announce();
	delete[] zombies;
}