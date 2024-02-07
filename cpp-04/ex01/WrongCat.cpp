//
// Created by sgurb on 3.02.2024.
//

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->type = "Wrong Cat";
	std::cout << "WrongCat Default constructor is running!" << std::endl;
}

WrongCat::WrongCat(std::string type){
	this->type = type;
	std::cout << "WrongCat constructor is running!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy) {
	std::cout << "WrongCat copy constructor is running!" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
	this->type = copy.type;
	std::cout << "WrongCat copy assignment constructor is running!" << std::endl;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor is running!" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Miaavv Miaavv Miaavv!" << std::endl;
}

std::string WrongCat::getType() const {
	return this->type;
}