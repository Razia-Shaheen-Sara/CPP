/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rshaheen <rshaheen@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/08 13:18:33 by rshaheen      #+#    #+#                 */
/*   Updated: 2025/04/08 13:52:32 by rshaheen      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(int argc, char **argv) 
{
    PhoneBook myBook;
	
    if (argc > 1)
    {
        (void)argv;
        std::cout << "Error: This program does not take arguments.\n";
        return 1;
    }
    myBook.run();
    return 0;
}
