/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 01:07:11 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/18 00:30:10 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// Explicitly required: "Intern" has no name, no grade, & no unique characteristics
// Interface class

Intern::Intern()
{	std::cout << "[CONSTRUCTED] Intern \n";		}

Intern::~Intern()
{	std::cout << "[DESTROYED] Intern \n";		}

Intern::Intern(const Intern& other)
{	(void)other;					}

Intern&	Intern::operator=(const Intern& other)
{	(void)other;	return (*this);			}


/* **** Functions Types ***** */

static	AForm *makeShrubbery(const std::string& target)
{	return new ShrubberyCreationForm(target);	}

static	AForm *makeRobotomy(const std::string& target)
{	return new RobotomyRequestForm(target);		}

static	AForm *makePresidential(const std::string& target)
{	return new PresidentialPardonForm(target);	}

/* ************************** */

typedef	AForm *(*FormMaker)(const std::string&);

struct	FormEntry
{
	const char	*name;
	FormMaker	make;
};

// Returns pointer AForm object (respective to form name passed as first parameter);
// Target initialized to the second parameter

AForm	*Intern::makeForm(const std::string& type, const std::string& target)
{
	static const	FormEntry forms[] =
	{
		{	"shrubbery creation",  &makeShrubbery 		},
		{	"robotomy request",    &makeRobotomy		},
		{	"presidential pardon", &makePresidential	}
	};

	for (int i = 0; i < 3; ++i)	// hardcoded: 3 entry array. NOT{ sizeof(forms)/sizeof(forms[0]) }
	{
		if (type == forms[i].name)
		{
			std::cout << "Intern creates " << type << std::endl;
			return forms[i].make(target);
		}
	}

	std::cout << "Intern couldn't create form. Unknown type: " << type << std::endl;
	return NULL;
}
