#include "phonebook.hpp"

/**
 * Removes the oldest contact (index 0) by shifting all contacts left
 */
void PhoneBook::removeOldestContact()
{
    int i = 0;
	while (i < 7)
    {
        contacts[i] = contacts[i + 1];
		i++;
    }
    contactIndex--;  // Maintain accurate count
}

void PhoneBook::addContact(Contact newContact) 
{
    if (contactIndex >= 8) 
        removeOldestContact();
    contacts[contactIndex] = newContact;
    contactIndex++;
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
	int i = 0;
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

void PhoneBook::displayContactDetails(int index) 
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

int main() 
{
    PhoneBook	myBook;
    std::string command;
	Contact		newContact;
    
    myBook.contactIndex = 0;
	while (true) 
	{
        std::cout << "Please ADD, SEARCH or EXIT\n";
        std::getline(std::cin, command);
        if (command == "ADD" || command == "add") 
		{
            std::cout << "Enter First Name: ";
            std::getline(std::cin, newContact.firstName);
            std::cout << "Enter Last Name: ";
            std::getline(std::cin, newContact.lastName);
            std::cout << "Enter Nickname: ";
            std::getline(std::cin, newContact.nickname);
            std::cout << "Enter Phone Number: ";
            std::getline(std::cin, newContact.phoneNumber);
            std::cout << "Enter Darkest Secret: ";
            std::getline(std::cin, newContact.darkestSecret);
            myBook.addContact(newContact);
        }
        else if (command == "SEARCH" || command == "search") 
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
        else if (command == "EXIT" || command == "exit") 
            break;
        else
            std::cout << "Invalid command. Try again." << std::endl;
    }
    return 0;
}

