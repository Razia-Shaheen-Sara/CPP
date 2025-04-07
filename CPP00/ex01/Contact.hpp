#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream> //for std::cout std::cin  and getline
#include <iomanip> //for std::setw
#include <string> //for std::string

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

#endif
