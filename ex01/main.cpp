/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 05:46:10 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/09 03:24:56 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib> // exit status
#include <iostream> // standard
#include <cctype>
#include <string> 
#include <cstdlib> // error handling
#include <sstream> // std::isstringstream
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
		return (EXIT_SUCCESS);
	size_t pos = phone.find_first_not_of("0123456789+- ");
	return (pos == std::string::npos);
}

void	cmdAdd(Phonebook &phonebook)
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

	// insert Class
}

int	main(int argc, char *av[])
{
	bool	workStatus;
	std::string	cmd; // ADD, SEARCH, EXIT
	
	(void)av;
	if (argc != 1)
		return (EXIT_FAILURE);
	
	workStatus = true;
	while (workStatus)
	{
		std::cout << "Please enter a command. (ADD, SEARCH, or EXIT): ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		else if (cmd == "ADD")
			std::cout << "ADD-function\n";
		else if (cmd == "SEARCH")
			std::cout << "SEARCH-function\n";
		else if (cmd == "EXIT")
		{
			std::cout << "EXIT\n";
			break;
		}
		else
			std::cerr << "Invalid command input. Consider your life choices.\n";
	}
	return (EXIT_SUCCESS);
}

/* Standard C++ library method:
	cout
   	cin.eof()
	string.compare()
	getline(std::cin, s)

