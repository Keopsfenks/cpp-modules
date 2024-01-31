//
// Created by sgurb on 12/21/2023.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook {
	private:
		contact Contact[8];
	public:
		void	addContact(int index, std::string name, std::string surname
						   , std::string nickname, std::string phoneNumber, std::string darkestSecret);
		contact getContact(int id);
};


#endif //CPP_PHONEBOOK_HPP
