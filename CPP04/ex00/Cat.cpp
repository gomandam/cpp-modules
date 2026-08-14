/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 00:19:38 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/14 01:31:29 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void)
{
	_type = "Cat";
	std::cout << "Cat constructor called.\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called.\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called.\n";
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called.\n";
	Animal::operator=(other);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Hiss!! Purrr!! Meoww!!\n";
}
