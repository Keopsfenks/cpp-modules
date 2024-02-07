//
// Created by sgurb on 3.02.2024.
//

#ifndef CPP_MODULES_WRONGCAT_HPP
#define CPP_MODULES_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat &copy);
	WrongCat &operator = (const WrongCat &copy);
	~WrongCat();

	void makeSound() const;
	std::string getType() const;
};


#endif
