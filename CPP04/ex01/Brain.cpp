/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 06:21:45 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/17 00:35:25 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called.\n";
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called.\n";
}

// Implementation for each time IDEA occurs
Brain::Brain(const Brain& other)
{
	int	i = 0;
	while (i < 100)
	{
		_ideas[i] = other._ideas[i];
		++i;
	}
	std::cout << "Brain copy constructor called.\n";
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain copy assignment operator called.\n";
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			_ideas[i] = other._ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (_ideas[index]);
	return ("");
}
