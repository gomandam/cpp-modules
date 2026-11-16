/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 03:55:56 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/12 04:19:02 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// sign grade: 25, execute: 5
PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
AForm("PresidentialPardonForm", 25, 5), _target(target) { }

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "[DESTROYED] PresidentialPardonForm\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
AForm(other), _target(other._target) { }

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	checkExecution(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox.\n";
}
