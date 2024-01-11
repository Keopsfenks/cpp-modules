//
// Created by sgurb on 1/7/2024.
//

#ifndef FMAN_HPP
#define FMAN_HPP

#include <iostream>
#include <fstream>
#include <string>

class fman {
private:
	std::string fileName;
	std::string find_text;
	std::string replace_text;
	std::string replaceFile;
public:
	fman(std::string fileName, std::string find_text, std::string replace_text);
	void	check_args(std::string fileName, std::string find_text, std::string replace_text);
	std::string getName(std::string name);
	bool flag;
	~fman();
};


#endif //CPP_MODULES_FMAN_HPP
