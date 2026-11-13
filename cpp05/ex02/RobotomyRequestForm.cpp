/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:20:16 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/12 03:31:05 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>	// ADDED: needed for std::rand (the 50% random outcome)

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
	AForm("RobotomyRequestForm", 72, 45), _target(target) { }

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[DESTROYED] RobotomyRequestForm\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	AForm(other), _target(other._target) { }	// FIXED: was empty; must copy the AForm base and _target

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	checkExecution(executor);
	std::cout << "** DRILLING ROBOT NOISES BRRR...**" << std::endl;

	if (std::rand() % 2 == 0)	// even->success
		std::cout << _target << " has been robotomized...\n";
	else
		std::cout << "Robotomy of " << _target << " failed!\n"; 
}
