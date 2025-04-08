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

static bool getValidatedInput(const std::string& prompt, std::string& output, size_t max_len) 
{
    while (true) 
    {
        std::cout << prompt;
        std::getline(std::cin, output);
        if (std::cin.eof()) 
            return false;
        if (isEmptyOrWhitespace(output)) 
        {
            std::cout << "Error: Field cannot be empty\n";
            continue;
        }
        if (max_len > 0 && output.length() > max_len) 
        {
            std::cout << "Error: Maximum " << max_len << " characters allowed\n";
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
    if (contactIndex == 0) return;  // Prevent underflow caused by using size_t for contactIndex
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
    
    if (!getValidatedInput("Enter First Name: ", newContact.firstName, Contact::MAX_NAME_LEN)) return;
    if (!getValidatedInput("Enter Last Name: ", newContact.lastName, Contact::MAX_NAME_LEN)) return;
    if (!getValidatedInput("Enter Nickname: ", newContact.nickname, Contact::MAX_NICKNAME_LEN)) return;
    if (!getValidatedInput("Enter Phone Number: ", newContact.phoneNumber, Contact::MAX_PHONE_LEN)) return;
    if (!getValidatedInput("Enter Darkest Secret: ", newContact.darkestSecret, Contact::MAX_SECRET_LEN)) return;
    
    addContact(newContact);
}
