//
// Created by sgurb on 1/1/2024.
//

#include <iostream>

int main()
{
	std::string eating_brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &eating_brain;
	std::string &stringREF = eating_brain;

	std::cout << &eating_brain << std::endl;
	std::cout << &(*stringPTR) << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << eating_brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}