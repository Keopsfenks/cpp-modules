//
// Created by sgurb on 2.02.2024.
//

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Unknown";
	std::cout << "Animal:Dog constructor is running!" << std::endl;
}

Dog::Dog(const Dog *copy) {
	*this = copy;
	std::cout << "Animal:Dog copy constructor is running!" << std::endl;
}

Dog &Dog::operator=(const Dog *copy) {
	this->type = copy->type;
	std::cout << "Animal:Dog copy assignment constructor is running!" << std::endl;
	return *this;
}

Dog::~Dog() {
	std::cout << "Animal:Dog destructor is running!" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Havv Havv Havv!" << std::endl;
}

std::string Dog::getType() const {
	return this->type;
}