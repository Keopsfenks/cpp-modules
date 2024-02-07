#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(){

	std::cout << "Animal Class Start." << std::endl << std::endl;
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << meta->getType() << std::endl;
	std::cout << std::endl;

	std::cout << "Animal Sound Start." << std::endl << std::endl;
	meta->makeSound();
	dog->makeSound();
	cat->makeSound();

	std::cout << "WrongAnimal Class Start" << std::endl << std::endl;
	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << std::endl;
	i->makeSound();
	WrongMeta->makeSound();
	delete i;
	delete WrongMeta;
/*
	std::cout << "Animal Class End." << std::endl << std::endl;

	{
		std::cout << "WrongAnimal Class Start" << std::endl << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();
		std::cout << "WrongAnimal Class End." << std::endl << std::endl;

		delete i;
		delete meta;
	}
	std::cout << std::endl;

	delete j;
	delete i;
	delete meta;
*/

	return 0;
}