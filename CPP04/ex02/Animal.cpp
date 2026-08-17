/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:08:02 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/17 03:10:51 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal constructor called.\n";
}

// Animal->abstract. VIRTUAL base destructor required. Secures destruction chain via Animal
Animal::~Animal(void)
{
	std::cout << "Animal destructor called.\n";
}

Animal::Animal(const Animal& other) : _type(other._type)
{
	std::cout << "Animal copy constructor called.\n";
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assignment operator called.\n";
	if (this != &other)
		_type = other._type;
	return (*this);
}

// virtual = 0, makes it pure virtual which means no implementation
/* void Animal::makeSound(void) const	{ std::cout << "Generic animal sound.\n"; } */

std::string Animal::getType(void) const
{
	return (_type);
}
