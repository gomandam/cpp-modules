/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:26:33 by gomandam          #+#    #+#             */
/*   Updated: 2026/09/23 02:30:53 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "\nNote: highest possbile grade \"1\", and \"150\" as lowest.\n";
	std::cout << "\n==========VALID INSTANCE==========\n";
	try
	{
		Bureaucrat	personA("Valid Guy", 3);
		std::cout << personA << std::endl;

		personA.incrementGrade(); personA.incrementGrade();
		std::cout << "Incremented twice: " << personA << std::endl;

		personA.decrementGrade();
		std::cout << "Decremented once:  " << personA << std::endl;
	}
	catch	(const std::exception& e) { std::cout << "Exception: " << e.what();	}
	
	std::cout << "\n============EDGE CASES============\n";
	try
	{
		Bureaucrat	personHigh("High de Edge", 1);
		std::cout << personHigh << std::endl;
		personHigh.incrementGrade();	// increment and throw
	}
	catch (const std::exception& e) { std::cout << "Exception: " << e.what(); }

	try
	{
		Bureaucrat	personLow("\nLoww de Edge", 150);
		std::cout << personLow << std::endl;
		personLow.decrementGrade();	// decrement and continues to throw
	}
	catch (const std::exception& e) { std::cout << "Exception: " << e.what(); }


	std::cout << "\n=========INVALID INSTANCE=========\n";
	try
	{
		Bureaucrat	personB("Invalid Guy de High", 0); // 0 -> high grade
	}
	catch (const std::exception& e) { std::cout << "Exception: " << e.what(); }

	try
	{
		Bureaucrat	personC("Invalid Guy de Low", 151); // 151 -> low grade
	}
	catch (const std::exception& e) { std::cout << "Exception: " << e.what(); }

	std::cout << "\n=========COPY CONSTRUCTOR=========\n";
	try
	{
		Bureaucrat	original("Facsimile", 33);
		Bureaucrat	copy(original);
		std::cout << "Original: " << original << std::endl;
		std::cout << "Copy:     " << copy << "\n\n";

	}
	catch (const std::exception& e) { std::cout << "Exception: " << e.what(); }

	std::cout << "\n========ASSIGNMENT OPERATOR=======\n";
	try
	{
		Bureaucrat	alpha("Alpha", 42);
		Bureaucrat	beta("Beta ", 24);

		std::cout << "Previous state: \n";
		std::cout << "00: " << alpha;
		std::cout << "\n01: " << beta << std::endl;

		beta = alpha;	// assign the state of 'alpha' to existing object 'beta'
		
		std::cout << "\nPost-process: \n"; 
		std::cout << "00: " << alpha;
		std::cout << "\n01: " << beta << "\n\n";
	}
	catch (const std::exception& e) { std::cout << "Exception: " << e.what(); }
	return (0);
}

/*
"try" a code block: BUT if exception is thrown, go to catch.

	try	 : code block that might throw an exception
        		↓
	throw	 : signals the problem
        		↓
	catch 	 : receives exception and handle it
        		↓
	what()	 : describes situation to a user/developer log, or other reporting system
        		↓
	returns "Grade is too high/low"; 
*/
