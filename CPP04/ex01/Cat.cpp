/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 00:19:38 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/16 07:21:17 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), _brain(new Brain())
{
	_type = "Cat";
	std::cout << "Cat constructor called.\n";
}

Cat::~Cat(void)
{
	delete	_brain;
	std::cout << "Cat destructor called.\n";
}

Cat::Cat(const Cat& other) : Animal(other), _brain(new Brain(*other._brain))
{
	std::cout << "Cat copy constructor called.\n";
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called.\n";
	if (this != &other)
	{
		Animal::operator=(other);
		*_brain = *other._brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Hiss!! Purrr!! Meoww!!\n";
}

Brain*	Cat::getBrain(void) const
{
	return (_brain);
}
