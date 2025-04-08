#include "PhoneBook.hpp"
#include "Contact.hpp"

//keep the constuctor's work separate
PhoneBook::PhoneBook() 
{
    contactIndex = 0;
}

static std::string putDot(std::string str) 
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return (str);
}
//std::setw(n) sets the width of the next output field to n characters.
//It’s used with std::cout to format text alignment and spacing.

void PhoneBook::displayAllContacts() 
{

	if (contactIndex == 0) 
	{
		std::cout << "No contacts to display.\n";
		return;
	}
	size_t i = 0;
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << "\n";
	while (i < contactIndex) 
	{
		std::cout << std::setw(10) << i << "|"
				  << std::setw(10) << putDot(contacts[i].firstName) << "|"
				  << std::setw(10) << putDot(contacts[i].lastName) << "|"
				  << std::setw(10) << putDot(contacts[i].nickname) << "\n";
		i++;
	}
}

void PhoneBook::displayContactDetails(size_t index) 
{
	if (index >= 0 && index < contactIndex) 
	{
		std::cout << "First Name: " << contacts[index].firstName << "\n";
		std::cout << "Last Name: " << contacts[index].lastName << "\n";
		std::cout << "Nickname: " << contacts[index].nickname << "\n";
		std::cout << "Phone Number: " << contacts[index].phoneNumber << "\n";
		std::cout << "Darkest Secret: " << contacts[index].darkestSecret << "\n";
	} 
	else 
		std::cout << "Invalid index.\n";
}

//std::cin reads input up to the first whitespace.
//std::getline reads a full line, including spaces, until the user presses Enter (which triggers the newline).

int main(int argc, char **argv) 
{
    PhoneBook	myBook;
    std::string command;
	Contact		newContact;
	
	if (argc > 1)
	{
		(void)argv;
		std::cout << "Error: This program does not take arguments.\n";
		return 1;
	}
	while (true) 
	{
    
		std::cout << "Please ADD, SEARCH or EXIT\n";
		std::getline(std::cin, command);
		if (std::cin.eof()) 
		{
            std::cout << "\nExiting program (EOF received)\n";
            break ;
        }
        if (command == "ADD" || command == "add" || command == "Add")
            myBook.processAdd();
        else if (command == "SEARCH" || command == "search" || command == "Search") 
		{
            myBook.displayAllContacts();
			std::string input;
			std::cout << "Enter the index to display full info: ";
			std::getline(std::cin, input);
			if (input.length() == 1 && std::isdigit(input[0])) 
			{
				int index = input[0] - '0';
				myBook.displayContactDetails(index);
			} 
			else 
				std::cout << "Invalid input\n";
        }
        else if (command == "EXIT" || command == "exit" || command == "Exit") 
            break;
        else
            std::cout << "Invalid command. Try again." << std::endl;
    }
    return 0;
}
