#include "fman.hpp"

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
				if (line[line.length() - 1] == 13) {
					if (line.substr(0, line.length()-1) == File->getName("find_text"))
						line = File->getName("replace_text");
				}
				else
					if (line == File->getName("find_text"))
						line = File->getName("replace_text");
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