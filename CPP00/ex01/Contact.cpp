/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 13:18:43 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/04/08 13:33:47 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

const std::string &Contact::getFirstName() 
{
    return firstName;
}

const std::string &Contact::getLastName() 
{
    return lastName;
}

const std::string &Contact::getNickName() 
{
    return nickname;
}

const std::string &Contact::getNumber() 
{
    return phoneNumber;
}

const std::string &Contact::getSecret() 
{
    return darkestSecret;
}

void Contact::setFirstName(const std::string &firstName) 
{
    this->firstName = firstName;
}

void Contact::setLastName(const std::string &lastName) 
{
    this->lastName = lastName;
}

void Contact::setNickName(const std::string &nickname) 
{
    this->nickname = nickname;
}

void Contact::setNumber(const std::string &phoneNumber) 
{
    this->phoneNumber = phoneNumber;
}

void Contact::setSecret(const std::string &secret) 
{
    this->darkestSecret = secret;
}
