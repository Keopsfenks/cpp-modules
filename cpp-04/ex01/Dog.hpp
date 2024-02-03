//
// Created by sgurb on 2.02.2024.
//

#ifndef CPP_MODULES_DOG_HPP
#define CPP_MODULES_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog *copy);
	Dog &operator = (const Dog *copy);
	~Dog();

	void makeSound() const;
	std::string getType(void) const;
};


#endif
