/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:26:33 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/18 01:36:58 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int	main(void)
{
	std::cout << "\n\n";
	std::srand(std::time(NULL));

// One Intern to rule them all. No name, no grade, no unique characteristics 
	Intern		randomIntern;

// Subject example: intern creates a known form with the given target
	{
	Bureaucrat	boss("El Boss", 1);
	AForm		*rrf;

	rrf = randomIntern.makeForm("robotomy request", "42Marvin");
		if (rrf)
		{
			boss.signForm(*rrf);
			boss.executeForm(*rrf);
			delete rrf;
		}
	}

// Unknown form name: makeForm prints an explicit error and returns NULL
	std::cout << "\n\nUnknown forms/jobs for the intern ...Ohh scary\n";
	{
	AForm	*unknown = randomIntern.makeForm("Other forms ...not sentient", "maybe Aliens");
		if (unknown)
			delete unknown;
		if (unknown)
			std::cout << "FAIL: expected NULL for an unknown form\n";
		else
			std::cout << "OK: unknown form returned NULL\n";
	}

// Unsigned form: executeForm must refuse to run it
	std::cout << "\n\nUnsigned forms ...the intern forgot the pen and forms\n";
	{
	Bureaucrat	worker("Worker", 1);
	AForm		*unsignedForm = randomIntern.makeForm("shrubbery creation", "whole vineyard");

		if (unsignedForm)
		{
			worker.executeForm(*unsignedForm);
			delete unsignedForm;
		}
	}

// More samples from: shrubbery creation, presidential pardon
	{
	std::cout << "\n\nMore jobs for the intern ...\n";
	Bureaucrat	another_boss("Another Boss", 140);
	AForm		*scf;

	scf = randomIntern.makeForm("shrubbery creation", "Bloomberg");
		if (scf)
		{
			another_boss.signForm(*scf);
			another_boss.executeForm(*scf);
			delete scf;
		}
	} 

	{
	std::cout << "\n\n";
	Bureaucrat	next_boss("Next Boss", 1);
	AForm		*ppf;

	ppf = randomIntern.makeForm("presidential pardon", "President");
		if (ppf)
		{
			next_boss.signForm(*ppf);
			next_boss.executeForm(*ppf);
			delete ppf;
		}
	}

// Intern copy: a cloned intern can make forms too
	std::cout << "\n\nCopied intern ...double the trouble, cloned interns can make forms too btw\n";
	{
		Intern		copyIntern = randomIntern;
		AForm		*copiedForm = copyIntern.makeForm("robotomy request", "Clone");

		if (copiedForm)
			delete copiedForm;
	}

	return (0);
}
