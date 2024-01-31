//
// Created by sgurb on 12/21/2023.
//

#include "contact.hpp"

void contact::setIndex(int index) {
	this->index = index;
}

void contact::setName(std::string name) {
	this->name = name;
}

void contact::setSurname(std::string surname) {
	this->surname = surname;
}

void contact::setNickname(std::string nickname) {
	this->nickname = nickname;
}

void contact::setPhoneNumber(std::string phoneNumber) {
	this->phoneNumber = phoneNumber;
}

void contact::setdarkestSecret(std::string darkestSecret) {
	this->darkestSecret = darkestSecret;
}

int contact::getIndex()
{
	return (this->index);
}

std::string contact::getName()
{
	return (this->name);
}

std::string contact::getSurname()
{
	return (this->surname);
}

std::string contact::getNickname()
{
	return (this->nickname);
}

std::string contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string contact::getDarkestSecret()
{
	return (this->darkestSecret);
}