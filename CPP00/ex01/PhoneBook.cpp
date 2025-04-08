/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 13:19:09 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/04/08 13:51:55 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() 
{
    contactIndex = 0;
}

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

static std::string putDot(std::string str) 
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

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
                  << std::setw(10) << putDot(contacts[i].getFirstName()) << "|"
                  << std::setw(10) << putDot(contacts[i].getLastName()) << "|"
                  << std::setw(10) << putDot(contacts[i].getNickName()) << "\n";
        i++;
    }
}

void PhoneBook::displayContactDetails(size_t index) 
{
    if (index >= 0 && index < contactIndex) 
    {
        std::cout << "First Name: " << contacts[index].getFirstName() << "\n";
        std::cout << "Last Name: " << contacts[index].getLastName() << "\n";
        std::cout << "Nickname: " << contacts[index].getNickName() << "\n";
        std::cout << "Phone Number: " << contacts[index].getNumber() << "\n";
        std::cout << "Darkest Secret: " << contacts[index].getSecret() << "\n";
    } 
    else 
    {
        std::cout << "Invalid index.\n";
    }
}

void PhoneBook::removeOldestContact() 
{
    if (contactIndex == 0) return;  
    int i = 0;
    while (i < 7)
    {
        contacts[i] = contacts[i + 1];
        i++;
    }
    contactIndex--;
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
    
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    if (!getValidatedInput("Enter First Name: ", firstName, Contact::getMaxNameLen())) return;
    newContact.setFirstName(firstName);

    if (!getValidatedInput("Enter Last Name: ", lastName, Contact::getMaxNameLen())) return;
    newContact.setLastName(lastName);

    if (!getValidatedInput("Enter Nickname: ", nickname, Contact::getMaxNickNameLen())) return;
    newContact.setNickName(nickname);

    if (!getValidatedInput("Enter Phone Number: ", phoneNumber, Contact::getMaxPhoneLen())) return;
    newContact.setNumber(phoneNumber);

    if (!getValidatedInput("Enter Darkest Secret: ", darkestSecret, Contact::getMaxSecretLen())) return;
    newContact.setSecret(darkestSecret);
    
    addContact(newContact);
}

void PhoneBook::run() 
{
    std::string command;
    while (true) 
    {
        std::cout << "Please ADD, SEARCH or EXIT\n";
        std::getline(std::cin, command);
        if (std::cin.eof()) 
        {
            std::cout << "\nExiting program (EOF received)\n";
            break;
        }
        if (command == "ADD" || command == "add" || command == "Add")
            processAdd();
        else if (command == "SEARCH" || command == "search" || command == "Search") 
        {
            displayAllContacts();
            std::string input;
            std::cout << "Enter the index to display full info: ";
            std::getline(std::cin, input);
            if (input.length() == 1 && std::isdigit(input[0])) 
            {
                int index = input[0] - '0';
                displayContactDetails(index);
            } 
            else 
                std::cout << "Invalid input\n";
        }
        else if (command == "EXIT" || command == "exit" || command == "Exit") 
            break;
        else
            std::cout << "Invalid command. Try again." << std::endl;
    }
}
