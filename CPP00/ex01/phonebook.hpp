#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream> //for std::cout std::cin  and getline
#include <iomanip> //for std::setw

//std::setw(n) sets the width of the next output field to n characters.
//It’s used with std::cout to format text alignment and spacing.

class Contact 
{
	public:

	std::string firstName;//all variables from subject
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

class PhoneBook 
{

	public:             //to access things in c++ from main, they must be public
	
	Contact contacts[8];//8 from subject
	int contactIndex;  
	void removeOldestContact();
	void addContact(Contact newContact);
	void displayAllContacts();
	void displayContactDetails(int);
};

#endif
