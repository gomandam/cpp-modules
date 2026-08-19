/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 00:19:38 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/17 03:36:40 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(), _brain(new Brain())
{
	_type = "Dog";
	std::cout << "Dog constructor called.\n";
}

Dog::~Dog(void)
{
	delete	_brain;
	std::cout << "Dog destructor called.\n";
}

Dog::Dog(const Dog& other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Dog copy constructor called.\n";
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called.\n";
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	return (*this);
}

// IMPLEMENTED: pure virtual function from Animal class
void	Dog::makeSound(void) const
{
	std::cout << "Woooofff!! Woooooff!! Gaarrrfffgg!!\n";
}

Brain* Dog::getBrain(void) const
{
	return (_brain);
}
