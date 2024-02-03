//
// Created by sgurb on 2.02.2024.
//

#ifndef CPP_MODULES_CAT_HPP
#define CPP_MODULES_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat &copy);
	Cat &operator = (const Cat &copy);
	~Cat();

	void makeSound(void) const;
	std::string getType(void) const;
};


#endif //CPP_MODULES_CAT_HPP
