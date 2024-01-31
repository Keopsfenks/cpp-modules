//
// Created by sgurb on 1/7/2024.
//

#include "fman.hpp"

fman::~fman() {
	std::cout << "File Manager is closed!" << std::endl;
}

fman::fman(std::string fileName, std::string find_text, std::string replace_text) {
	this->fileName = fileName;
	this->find_text = find_text;
	this->replace_text = replace_text;
	this->replaceFile = this->fileName + ".replace";
	this->check_args(this->fileName, this->find_text, this->replace_text);
}

void fman::check_args(std::string fileName, std::string find_text, std::string replace_text) {
	std::ifstream fileM(fileName.c_str());

	if (!fileM.is_open()) {
		std::cout << "ERROR: File is not open" << std::endl;
		this->flag = true;
	}
	if (fileName.empty() || find_text.empty() || replace_text.empty()) {
		std::cout << "ERROR: Empty argument/arguments!" << std::endl;
		this->flag = true;
	}
	else if (find_text.compare(replace_text) == 0) {
		std::cout << "ERROR: String-1 same with String-2. They've to be different!" << std::endl;
		this->flag = true;
	}
	fileM.close();
}

std::string fman::getName(std::string name) {
	if (name == "file")
		return (this->fileName);
	else if (name == "find_text")
		return (this->find_text);
	else if (name == "replace_text")
		return (this->replace_text + "\n");
	else if (name == "replaceFile")
		return (this->replaceFile);
	return ("VALID INPUT");
}