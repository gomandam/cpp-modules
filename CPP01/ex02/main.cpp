/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 04:26:41 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/18 05:17:44 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	insertSeparator(void)
{
	std::cout << "\n*****************************************************\n";
}


int	main(void)
{
	std::string	zombieString = "HI THIS IS BRAIN";	// String
	std::string  *	stringPTR = &zombieString;		// Pointer to the string
	std::string  &	stringREF = zombieString;		// Reference to the string

	std::cout << "*****************************************************" << std::endl;

	std::cout << "The memory address of string variable: " << &zombieString << std::endl;
	std::cout << "The memory address held by stringPTR:  " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:  " << &stringREF;

	insertSeparator();

	std::cout << "The value of string variable:        "   << zombieString << std::endl;
	std::cout << "The value of pointed by stringPTR:   " << *stringPTR << std::endl;
	std::cout << "The value of pointed by stringREF:   " << stringREF;

	insertSeparator();
	return (0);
}
