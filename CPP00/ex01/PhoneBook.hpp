#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook 
{

	private:

	Contact contacts[8];
	int contactIndex;
	void 	addContact(Contact newContact);


	public:             //to access things in c++ from main, they must be public
	
	PhoneBook(); // inline constructor == is a special function in C++ that automatically runs when an object is created, used to initialize its data.
	void	processAdd();
	void 	removeOldestContact();
	void 	displayAllContacts();
	void 	displayContactDetails(int);
};

#endif
