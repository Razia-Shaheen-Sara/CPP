/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 13:19:16 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/04/08 14:02:24 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook 
{

	private:

	Contact contacts[8];
	size_t contactIndex;
	void 	addContact(Contact newContact);
	void	processAdd();
	void 	removeOldestContact();
	void 	displayAllContacts();
	void 	displayContactDetails(size_t);


	public:             //to access things in c++ from main, they must be public
	
	PhoneBook();
	~PhoneBook() = default;


	void run();
};

#endif

