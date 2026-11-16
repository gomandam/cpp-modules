/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:26:33 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/04 17:11:31 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "=== Form grade validation ===" << std::endl;

	// Verify that the Form constructor rejects a grade above the allowed range.
	try
	{
		Form invalidHighGrade("Invalid high-grade form", 0, 50);
		(void)invalidHighGrade;
	}
	catch (const std::exception& error)
	{
		std::cout << "Caught exception: " << error.what() << std::endl;
	}

	// Verify that the Form constructor rejects a grade below the allowed range.
	try
	{
		Form invalidLowGrade("Invalid low-grade form", 151, 50);
		(void)invalidLowGrade;
	}
	catch (const std::exception& error)
	{
		std::cout << "Caught exception: " << error.what() << std::endl;
	}

	std::cout << "\n=== Signing a form ===" << std::endl;

	// Set up a form and bureaucrats to test both insufficient and sufficient signing grades.
	Form travelRequest("Travel Request", 50, 25);
	Bureaucrat juniorClerk("Junior Clerk", 100);
	Bureaucrat seniorClerk("Senior Clerk", 25);

	std::cout << travelRequest << std::endl;

	//Junior clerk should fail because grade 100 is too low to sign this form.
	juniorClerk.signForm(travelRequest);
	std::cout << travelRequest << std::endl;

	//Senior clerk should succeed because grade 25 is high enough to sign this form.
	seniorClerk.signForm(travelRequest);
	std::cout << travelRequest << std::endl;
	
	return (0);
}
