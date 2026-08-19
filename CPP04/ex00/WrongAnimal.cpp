/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:08:02 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/12 01:08:01 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called.\n";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
	std::cout << "WrongAnimal copy constructor called.\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy assignment operator called.\n";
	if (this != &other)
		_type = other._type;
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Generic WrongAnimal sound.\n";
}

std::string WrongAnimal::getType(void) const
{
	return (_type);
}
