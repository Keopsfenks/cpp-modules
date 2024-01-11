//
// Created by sgurb on 1/1/2024.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string Name;
public:
	std::string getName();
	void	setName(std::string name);
	void    announce();
	~Zombie();
};

Zombie*	zombieHorde(int N, std::string name);


#endif
