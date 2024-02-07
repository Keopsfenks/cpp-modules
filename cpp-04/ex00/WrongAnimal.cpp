//
// Created by sgurb on 3.02.2024.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->type = "Wrong Animal";
	std::cout << "WrongAnimal Default constructor is running!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
	this->type = type;
	std::cout << "WrongAnimal constructor is running!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy){
	*this = copy;
	std::cout << "WrongAnimal copy constructor is running!" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy){
	this->type = copy.type;
	std::cout << "WrongAnimal copy assignment constructor is running!" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor is running!" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "WrongAnimal is talking..." << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->type;
}