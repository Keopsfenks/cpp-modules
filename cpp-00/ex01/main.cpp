#include "PhoneBook.hpp"

int isInt(std::string str)
{
	int i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	addContact(PhoneBook *phoneData)
{
	static int id = 0;
	std::string name;
	std::string surname;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "Please enter a name: " << std::endl;
	std::cin >> name;
	while (name.empty())
	{
		std::cout << "Name can't be empty" << std::endl;
		std::cout << "Please enter a name: " << std::endl;
		std::cin >> name;
	}
	std::cout << "Please enter a surname: " << std::endl;
	std::cin >> surname;
	while (surname.empty())
	{
		std::cout << "Surname can't be empty" << std::endl;
		std::cout << "Please enter a surname: " << std::endl;
		std::cin >> surname;
	}
	std::cout << "Please enter a nickname: " << std::endl;
	std::cin >> nickname;
	while (nickname.empty())
	{
		std::cout << "Nickname can't be empty" << std::endl;
		std::cout << "Please enter a nickname: " << std::endl;
		std::cin >> nickname;
	}
	std::cout << "Please enter a phone number: " << std::endl;
	std::cin >> phoneNumber;
	while (!isInt(phoneNumber))
	{
		std::cout << "A phone number cannot include alphabetical characters" << std::endl;
		std::cin >> phoneNumber;
	}
	while (phoneNumber.empty())
	{
		std::cout << "Phone number can't be empty" << std::endl;
		std::cout << "Please enter a phone number: " << std::endl;
		std::cin >> phoneNumber;
		while (!isInt(phoneNumber))
		{
			std::cout << "A phone number cannot include alphabetical characters" << std::endl;
			std::cin >> phoneNumber;
		}
	}
	std::cout << "Please enter a darkest secret: " << std::endl;
	std::cin >> darkestSecret;
	while (darkestSecret.empty())
	{
		std::cout << "Darkest secret can't be empty" << std::endl;
		std::cout << "Please enter a dark secret: " << std::endl;
		std::cin >> darkestSecret;
	}
	phoneData->addContact(id, name, surname, nickname, phoneNumber, darkestSecret);
	id++;
	if (id == 8)
		id = 0;
}

void	viewTable(PhoneBook phoneData)
{
	std::cout << " ------------------------------------------- " << std::endl;
	std::cout << "|   index  |   name   |  surname | nickname |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		if (!(phoneData.getContact(i).getName().empty()))
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|";
			if (phoneData.getContact(i).getName().length() > 10)
				std::cout << std::setw(10) << phoneData.getContact(i).getName().substr(0, 9) + "." << "|";
			else
				std::cout << std::setw(10) << phoneData.getContact(i).getName() << "|";
			if (phoneData.getContact(i).getSurname().length() > 10)
				std::cout << std::setw(10) << phoneData.getContact(i).getSurname().substr(0, 9) + "." << "|";
			else
				std::cout << std::setw(10) << phoneData.getContact(i).getSurname() << "|";
			if (phoneData.getContact(i).getNickname().length() > 10)
				std::cout << std::setw(10) << phoneData.getContact(i).getNickname().substr(0, 9) + "." << "|" << std::endl;
			else
				std::cout << std::setw(10) << phoneData.getContact(i).getNickname() << "|" << std::endl;
		}
		else
		{
			std::cout << "|" << std::setw(10) << i + 1 << "|";
			std::cout << std::setw(10) << phoneData.getContact(i).getName() << "|";
			std::cout << std::setw(10) << phoneData.getContact(i).getSurname() << "|";
			std::cout << std::setw(10) << phoneData.getContact(i).getNickname() << "|" << std::endl;
		}
	}
	std::cout << " ------------------------------------------- " << std::endl;
}

int ft_atoi(std::string str)
{
	int result = 0;
	for (int i = 0; str[i]; i++)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	searchContact(PhoneBook phoneData)
{
	int id;
	std::string index;

	std::cout << "Please enter an index: " << std::endl;
	std::cin >> index;
	while (!isInt(index))
	{
		std::cout << "An index cannot include alphabetical characters" << std::endl;
		std::cin >> index;
	}
	id = (ft_atoi(index) - 1);
	if (id < 0 || id > 7)
		std::cout << "Invalid index" << std::endl;
	else if (phoneData.getContact(id).getName().empty())
		std::cout << "No contact with this index" << std::endl;
	else
	{
		std::cout << "Name: " << phoneData.getContact(id).getName() << std::endl;
		std::cout << "Surname: " << phoneData.getContact(id).getSurname() << std::endl;
		std::cout << "Nickname: " << phoneData.getContact(id).getNickname() << std::endl;
		std::cout << "Phone number: " << phoneData.getContact(id).getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << phoneData.getContact(id).getDarkestSecret() << std::endl;
	}

}
int main(void)
{
	PhoneBook phoneData;
	std::string variable;

	while (true)
	{
		std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
		std::cin >> variable;
		if (variable == "ADD")
		{
			addContact(&phoneData);
		}
		else if (variable == "SEARCH") {

			viewTable(phoneData);
			searchContact(phoneData);
		}
		else if (variable == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
}