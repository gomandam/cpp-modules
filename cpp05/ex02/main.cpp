/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:26:33 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/13 23:13:17 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <string>
#include <exception>	// try & catch

#include <cstdlib>	// std::srand
#include <ctime>	// std::time
#include <fstream>	// std::ofstream

int	main(void)
{
	std::cout << "\n==================================\n";

	std::srand(std::time(NULL));	// generates a seed for random number

	Bureaucrat king("King", 1);
	Bureaucrat pawn("Pawn", 140);

	ShrubberyCreationForm	shrub("bloom");
	RobotomyRequestForm	robot("robocop");
	PresidentialPardonForm	pardon("el Boss");

	std::cout << "\n====TRY EXECUTE UNSIGNED FORMS====\n";
	king.executeForm(shrub);	// Fails: not signed

	std::cout << "\n====SIGN AND EXECUTE====\n";
	king.signForm(shrub);
	king.executeForm(shrub); 	// creates bloom_shurberry file

	std::cout << "\n====GRADES AND FORMS====\n";
	pawn.signForm(robot);		// Fails: grade low
	king.signForm(robot);		// OK
	king.executeForm(robot);	// 50% chance of success

	return (0);
}

