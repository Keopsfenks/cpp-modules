//
// Created by sgurb on 4.02.2024.
//

#include "Brain.hpp"

Brain::Brain() {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "şükrü";
	}
	std::cout << "Brain default constructor is running!" << std::endl;
}

Brain::Brain(const Brain &copy) {
	*this = copy;
	std::cout << "Brain copy constructor is running!" << std::endl;
}

Brain &Brain::operator=(const Brain &copy) {
	for (int i = 0; i < 100; i++) {
		this->ideas[i].append(copy.ideas[i]);
	}
	std::cout << "Brain copy assignment constructor is running!" << std::endl;
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor is running!" << std::endl;
}

const std::string* Brain::getIdeas() const {
	return (ideas);
}

std::string Brain::getIdeas(int i) const {
	if (!this->ideas[i].empty())
		return (this->ideas[i]);
	return ("");
}

void Brain::setIdeas(int i, const std::string& line){
	if (!line.empty())
		this->ideas[i].assign(line);
}