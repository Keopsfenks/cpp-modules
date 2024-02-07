//
// Created by sgurb on 2.02.2024.
//

#ifndef CPP_MODULES_ANIMAL_HPP
#define CPP_MODULES_ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &copy);
	Animal &operator = (const Animal &copy);
	virtual ~Animal();

	virtual void makeSound(void) const;
	virtual std::string getType() const;
};


#endif //CPP_MODULES_ANIMAL_HPP
