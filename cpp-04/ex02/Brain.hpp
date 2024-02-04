//
// Created by sgurb on 4.02.2024.
//

#ifndef CPP_MODULES_BRAIN_HPP
#define CPP_MODULES_BRAIN_HPP

#include "Animal.hpp"
#include <sstream>

class Brain {
private:
	std::string ideas[100];

public:
	Brain();
	Brain(const Brain &copy);
	Brain &operator=(const Brain &copy);
	~Brain();

	const std::string *getIdeas() const;
	std::string getIdeas(int i) const;
	void setIdeas(int i, const std::string &line);
};


#endif
