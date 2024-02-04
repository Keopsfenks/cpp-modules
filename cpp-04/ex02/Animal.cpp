//
// Created by sgurb on 2.02.2024.
//

#include "Animal.hpp"

Animal::Animal() {
	type = "Unknown";
	std::cout << "Animal constructor is running!" << std::endl;
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << "Animal type constructor is running!" << std::endl;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
	std::cout << "Animal copy constructor is running!" << std::endl;
}

Animal &Animal::operator=(const Animal &copy) {
	this->type = copy.type;
	std::cout << "Animal copy assignment constructor is running!" << std::endl;
	return *this;
}

Animal::~Animal() {
	std::cout << "Animal destructor is running!" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "Animal is talking..." << std::endl;
}

std::string Animal::getType() const {
	return (type);
}
