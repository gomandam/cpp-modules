/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 00:19:38 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/12 00:56:49 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void) : Animal()
{
	_type = "Dog";
	std::cout << "Dog constructor called.\n";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog copy constructor called.\n";
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called.\n";
	Animal::operator=(other);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woooofff!! Woooooff!! Gaarrrfffgg!!\n";
}
