//
// Created by sgurb on 2.02.2024.
//

#include "Cat.hpp"


Cat::Cat() {
	this->type = "Cat";
	std::cout << "Animal:Cat constructor is running!" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	this->type = copy.type;
	std::cout << "Animal:Cat copy constructor is running!" << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
	this->type = copy.type;
	std::cout << "Animal:Cat copy assignment constructor is running!" << std::endl;
	return *this;
}

Cat::~Cat() {
	std::cout << "Animal:Cat destructor is running!" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Miaavv Miaavv Miaavv!" << std::endl;
}

std::string Cat::getType() const {
	return this->type;
}