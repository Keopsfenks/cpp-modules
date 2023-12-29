//
// Created by sgurb on 12/21/2023.
//

#include "PhoneBook.hpp"

void
PhoneBook::addContact(int index, std::string name, std::string surname, std::string nickname, std::string phoneNumber,
					  std::string darkestSecret) {
	this->Contact[index].setIndex(index);
	this->Contact[index].setName(name);
	this->Contact[index].setSurname(surname);
	this->Contact[index].setNickname(nickname);
	this->Contact[index].setPhoneNumber(phoneNumber);
	this->Contact[index].setdarkestSecret(darkestSecret);
}

contact PhoneBook::getContact(int id)
{
	return (this->Contact[id]);
}