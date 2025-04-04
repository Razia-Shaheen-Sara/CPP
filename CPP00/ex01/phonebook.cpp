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
    currentIndex--;  // Maintain accurate count
}

void PhoneBook::addContact(Contact newContact) 
{
    if (currentIndex >= 8) 
        removeOldestContact();
    contacts[currentIndex] = newContact;
    currentIndex++;
}

bool PhoneBook::searchContacts(std::string searchName) 
{
    int i = 0;
	while (i < 8) 
	{
        if (contacts[i].firstName == searchName || contacts[i].lastName == searchName) 
		{
            // Display the contact details
            std::cout << "Found: " << contacts[i].firstName << " " << contacts[i].lastName << std::endl;
            return true;
        }
		i++;
    }
    return (false);  // Contact not found
}

//std::cin reads input up to the first whitespace.
//std::getline reads a full line, including spaces, until the user presses Enter (which triggers the newline).

int main() 
{
    PhoneBook	myBook;
    std::string command;
	Contact		newContact;
    
    myBook.currentIndex = 0;
	while (true) 
	{
        std::cout << "Please ADD, SEARCH or EXIT\n";
        std::getline(std::cin, command);

        if (command == "ADD") 
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
        else if (command == "SEARCH") 
		{
            std::string searchName;
            std::cout << "Enter First or Last Name to search: ";
            std::getline(std::cin, searchName);
            
            if (!myBook.searchContacts(searchName)) 
			{
                std::cout << "Contact not found!" << std::endl;
            }
        }
        else if (command == "EXIT") 
            break;
        else
            std::cout << "Invalid command. Try again." << std::endl;
    }
    return 0;
}

