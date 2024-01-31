#include "Zombie.hpp"

void    Zombie::announce(){
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
	std::cout << this->Name + ": is died..." << std::endl;
}

std::string Zombie::getName() {
	return (this->Name);
}

void Zombie::setName(std::string name) {
	this->Name = name;
}