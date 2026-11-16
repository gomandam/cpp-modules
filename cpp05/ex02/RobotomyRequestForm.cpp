/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:20:16 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/16 12:44:42 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
	AForm("RobotomyRequestForm", 72, 45), _target(target) { }

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "[DESTROYED] RobotomyRequestForm\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	AForm(other), _target(other._target) { }

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
		std::cout << _target << " has been robotomized...50% chance \n";
	else
		std::cout << "Robotomy of " << _target << " failed!\n"; 
}
