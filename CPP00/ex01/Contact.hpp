/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 13:18:54 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/04/08 14:05:03 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream> //for std::cout std::cin  and getline
#include <iomanip> //for std::setw
#include <string> //for std::string

//std::setw(n) sets the width of the next output field to n characters.
//It’s used with std::cout to format text alignment and spacing.

class Contact 
{
	private:

		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

		static const size_t MAX_NAME_LEN = 20;
    	static const size_t MAX_NICKNAME_LEN = 15;
    	static const size_t MAX_PHONE_LEN = 15;
    	static const size_t MAX_SECRET_LEN = 30;

	public:
		static size_t getMaxNameLen() { return MAX_NAME_LEN; }
		static size_t getMaxNickNameLen() { return MAX_NICKNAME_LEN; }
		static size_t getMaxPhoneLen() { return MAX_PHONE_LEN; }
		static size_t getMaxSecretLen() { return MAX_SECRET_LEN; }
	
		Contact() = default;
		~Contact() = default;

		const std::string &getFirstName();
		const std::string &getLastName();
		const std::string &getNickName();
		const std::string &getNumber();
		const std::string &getSecret();

		void setFirstName(const std::string &fistName);
		void setLastName(const std::string &lastName);
		void setNickName(const std::string &nickName);
		void setNumber(const std::string &phoneNumber);
		void setSecret(const std::string &secret);


};

#endif
