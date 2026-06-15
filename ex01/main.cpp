/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 05:46:10 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/09 12:23:19 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib> // exit status
#include <iostream> // standard
#include <cctype>
#include <string> 
#include "./phonebook.hpp"
#include "./contact.hpp"

std::string	getInput(const std::string &prompt)
{
	std::string input;
	std::cout << prompt;
	std::getline(std::cin, input);
	return (input);
}

int	isValidPhonenumber(const std::string &phone)
{
	if (phone.empty())
		return (0);
	size_t pos = phone.find_first_not_of("0123456789+- ");
	return (pos == std::string::npos);
}

void	manageAdd(Phonebook &phonebook)
{
	std::string firstName = getInput("Enter first name: ");
	if (firstName.empty())
	{
		std::cout << "Error: empty field. \n";
		return ;
	}

	std::string lastName = getInput("Enter last name: ");
	if (lastName.empty())
	{
		std::cout << "Error: empty field. \n";
		return ;
	}

	std::string nickName = getInput("Enter nick name: ");
	if (nickName.empty())
	{
		std::cout << "Error: empty field. \n";
		return ;
	}

	std::string phonenumber = getInput("Enter phone number: ");
	if (phonenumber.empty() || !isValidPhonenumber(phonenumber))
	{
		std::cout << "Error: invalid phone number." << std::endl;
		return ;
	}

	std::string darkSecret = getInput("Enter darkest secret: ");
	if (darkSecret.empty())
	{
		std::cout << "Error: empty field. \n";
		return ;
	}

	Contact newContact;
	newContact.putContact(firstName, lastName, nickName, phonenumber, darkSecret);
	phonebook.addContact(newContact);
	std::cout << "Contact added successfully!" << std::endl;
}

void	manageSearch(Phonebook &phonebook)
{
	if (phonebook.getContactCount() == 0)
	{
		std::cout << "Phonebook is empty." << std::endl;
		return ; 
	}

	phonebook.displayContacts();

	std::string indexStr = getInput("Enter index: ");
	if (indexStr.empty())
		return ;

	int	index = std::atoi(indexStr.c_str());
	phonebook.displayContact(index);
}

int	main(int argc, char *av[])
{
	Phonebook phonebook;
	bool	workStatus;
	std::string	cmd; // ADD, SEARCH, EXIT
	
	(void)av;
	if (argc != 1)
		return (EXIT_FAILURE);
	
	workStatus = true;
	while (workStatus)
	{
		cmd = getInput("Please enter a command. (ADD, SEARCH, or EXIT): ");
		if (std::cin.eof())
			return (EXIT_FAILURE);
		else if (cmd == "ADD")
			manageAdd(phonebook);
		else if (cmd == "SEARCH")
			manageSearch(phonebook);
		else if (cmd == "EXIT")
			break;
	}
	return (EXIT_SUCCESS);
}

/* Standard C++ library method:
	cout
   	cin.eof()
	string.compare()
	getline(std::cin, s)
*/
