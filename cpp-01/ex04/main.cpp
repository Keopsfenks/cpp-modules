#include "fman.hpp"

std::string changeString(std::string line, std::string find_text, std::string replace_text) {
	(void )replace_text;
	size_t index = line.find(find_text);
	std::string newLine;
	if (index != std::string::npos) {
		newLine = newLine + line.substr(0, index);
		newLine = newLine + replace_text.substr(0, replace_text.length() - 1);
		newLine = newLine + line.substr(index + find_text.length(), line.length());
		return (newLine);
	}
	return (line);
}

int main(int ac, char **av)
{
	if (ac == 4) {
		std::string	line;

		fman	*File = new fman(av[1], av[2], av[3]);
		if (File->flag)
			return (1);

		std::ifstream fileR(File->getName("file").c_str());
		std::ofstream fileW(File->getName("replaceFile").c_str());

		if (fileW.is_open()) {
			while (std::getline(fileR, line)) {
				line = changeString(line, File->getName("find_text"), File->getName("replace_text"));
				fileW << line;
			}
		}
		fileR.close();
		fileW.close();
		delete File;
	}
	else {
		std::cout << "This program takes only 3 arguments" << std::endl;
		return (1);
	}
	return (0);
}