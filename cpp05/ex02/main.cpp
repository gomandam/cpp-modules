/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:26:33 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/14 00:00:00 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"	// CHANGED: ex02 base class is AForm (Form.hpp was removed)
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <string>
#include <exception>	// try & catch
#include <cstdlib>	// std::srand
#include <ctime>	// std::time

int	main(void)
{
	std::cout << "\n==================================\n";

	std::srand(std::time(NULL));	// seed the RNG so RobotomyRequestForm is truly 50/50

	Bureaucrat king("King", 1);	// highest possible grade: can sign/execute every form
	Bureaucrat pawn("Pawn", 140);	// low grade: used to trigger "grade too low" paths
	Bureaucrat intern("Intern", 150);	// lowest grade: used for the decrementGrade() exception

	ShrubberyCreationForm	shrub("bloom");	// sign 145 / exec 137
	RobotomyRequestForm	robot("robocop");	// sign 72  / exec 45
	PresidentialPardonForm	pardon("el Boss");	// sign 25  / exec 5

	std::cout << "\n====BUREAUCRATS (insertion operator)====\n";	// ADDED: proves operator<< works
	std::cout << king << std::endl;
	std::cout << pawn << std::endl;

	std::cout << "\n====TRY EXECUTE UNSIGNED FORMS====\n";
	king.executeForm(shrub);	// must fail: form is not signed yet

	std::cout << "\n====SIGN AND EXECUTE SHRUBBERY====\n";
	king.signForm(shrub);		// sign grade 145, king(1) succeeds
	king.executeForm(shrub);	// creates bloom_shrubbery
	pawn.signForm(shrub);		// ADDED: pawn(140) can sign (<=145) ...
	pawn.executeForm(shrub);	// ADDED: ... but cannot execute (>137): signed + grade too low

	std::cout << "\n====ROBOTOMY REQUEST====\n";
	pawn.signForm(robot);		// fails: pawn(140) > sign grade 72
	king.signForm(robot);		// OK
	king.executeForm(robot);	// 50% chance of success (drilling noises)

	std::cout << "\n====PRESIDENTIAL PARDON====\n";
	king.signForm(pardon);		// OK: king(1) <= sign grade 25
	pawn.signForm(pardon);		// ADDED: fails: pawn(140) > sign grade 25
	king.executeForm(pardon);	// OK: king(1) <= exec grade 5
	pawn.executeForm(pardon);	// ADDED: fails: signed, but pawn(140) > exec grade 5

	std::cout << "\n====GRADE LIMIT EXCEPTIONS====\n";
	try	// ADDED: constructing with grade 0 must throw GradeTooHighException
	{
		Bureaucrat tooHigh("TooHigh", 0);
	}
	catch (std::exception& e)
	{
		std::cout << "caught: " << e.what() << std::endl;
	}
	try	// ADDED: constructing with grade 151 must throw GradeTooLowException
	{
		Bureaucrat tooLow("TooLow", 151);
	}
	catch (std::exception& e)
	{
		std::cout << "caught: " << e.what() << std::endl;
	}
	try	// ADDED: incrementing a grade-1 bureaucrat must throw GradeTooHighException
	{
		king.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << "caught: " << e.what() << std::endl;
	}
	try	// ADDED: decrementing a grade-150 bureaucrat must throw GradeTooLowException
	{
		intern.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << "caught: " << e.what() << std::endl;
	}

	return (0);
}
