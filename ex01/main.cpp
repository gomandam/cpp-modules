/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 05:46:10 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/27 02:30:19 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // exit status
#include <iostream>
#include <cctype>
#include <string>

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
			std::cout << "EXIT-function\n";
			break;
		}
		else
			std::cout << "Invalid command input. Consider your life choices.\n";
	}
	return (EXIT_SUCCESS);
}

/* Standard C++ library method:
	cout
   	cin.eof()
	string.compare()
	getline(std::cin, s)

*/
