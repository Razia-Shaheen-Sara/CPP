#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cctype> //for isspace


// Helper function to check if string is empty or only whitespace
static bool isEmptyOrWhitespace(const std::string& str) 
{
    size_t i = 0;
	if (str.empty())
        return true;

    while (str[i]) 
	{
        if (!isspace(str[i]))
            return false;
        i++;
    }
    return true;
}

static bool getValidatedInput(const std::string& prompt, std::string& output) 
{
    while (true) 
    {
        std::cout << prompt;
        std::getline(std::cin, output);
        
        // Handle EOF (Ctrl+D)
        if (std::cin.eof()) 
        {
            std::cin.clear(); // Clear error state
            return false;    // Signal EOF to caller
        }
        // Validate input
        if (isEmptyOrWhitespace(output)) 
        {
            std::cout << "Error: Field cannot be empty\n";
            continue;
        }
        return true; // Valid input
    }
}

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

void PhoneBook::processAdd() 
{
    Contact newContact;
    
    if (!getValidatedInput("Enter First Name: ", newContact.firstName)) return;
    if (!getValidatedInput("Enter Last Name: ", newContact.lastName)) return;
    if (!getValidatedInput("Enter Nickname: ", newContact.nickname)) return;
    if (!getValidatedInput("Enter Phone Number: ", newContact.phoneNumber)) return;
    if (!getValidatedInput("Enter Darkest Secret: ", newContact.darkestSecret)) return;
    
    addContact(newContact);
}
