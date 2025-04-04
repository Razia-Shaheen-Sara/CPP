#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

struct Contact 
{
	std::string firstName;//all variables from subject
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

class PhoneBook 
{

	public:             //to access things in c++ from main, they must be public
	Contact contacts[8];//from subject
	int currentIndex;
	void removeOldestContact();
	void addContact(Contact newContact);
	bool searchContacts(std::string searchName);
};

#endif
