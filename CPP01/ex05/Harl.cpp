/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 16:18:32 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/01 22:23:22 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) { }

Harl::~Harl(void) { }

// Member functions (or methods). To be called by a pointer.
// A function that belongs to a class; has access to " this-> *methodName[i]() "
void	Harl::debug(void)
{
	std::cout << "[DEBUG] Contains contextual information. Mostly used for problem diagnosis." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] Details extensive information. Helpful for tracing program execution in a production environment." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] Indicates a potential issue in the system. However, it can be ignored or handled." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] Critical issue; requires manual intervention. Unrecoverable error has occurred." << std::endl;
}

void	Harl::exit(void)
{
	std::cout << "[EXIT] Notifications have ended." << std::endl;
	std::exit(EXIT_SUCCESS);
}

// Member function (or method) 
void	Harl::complain(std::string levelInput)
{
// Local variable, array of strings for "Levels" after receiving from std::cin
	const std::string	listOfLevels[5] =
	{				"DEBUG",
					"INFO",
					"WARNING",
					"ERROR",
					"EXIT"
	};

// Both these arrays are parallel structures — matches their call of order
// Array of Pointers calling a member function
	void	(Harl:: * listOfMethods[5])() =
	{				& Harl::debug,
					& Harl::info,
					& Harl::warning,
					& Harl::error,
					& Harl::exit
	};
/* Without the parentheses around Harl:: * the [] (array) and "()" (function call/signature) operators bind to the wrong parts of the declaration causing a syntax error. */

	for (size_t i = 0; i < sizeof(listOfLevels)/sizeof(listOfLevels[0]); i++)
	{
		if (listOfLevels[i] == levelInput)
		{
			(this->*listOfMethods[i]) ();
				return ;
		}	
	// Member function pointer call: dereference and call operators.
	// " this " pointer to Harl object
	// " ->* " applies the member function pointer to that object
	}
}

/* OPTIONS:

	(C++98)
	 for (size_t i = 0; i < sizeof(levels) / sizeof(levels[0]) ; i++)
		by dividing them gives you the number of elements in the array
		sizeof(levels) -> returns total byte size of the entire array 128 bytes
		sizeof(levels[0]) -> returns byte size of a single element 32 bytes
		128 bytes / 32 bytes = 4 iterations of FOR LOOP

	(C++17)	std::size(listOfLevels)
	(C++11)	std::array (via range based loop)
*/
