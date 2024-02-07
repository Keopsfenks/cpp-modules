//
// Created by sgurb on 3.02.2024.
//

#ifndef CPP_MODULES_WRONGANIMAL_HPP
#define CPP_MODULES_WRONGANIMAL_HPP

#include "Animal.hpp"

class WrongAnimal {

protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &copy);
	WrongAnimal &operator = (const WrongAnimal &copy);
	~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};


#endif
