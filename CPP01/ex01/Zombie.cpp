/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 02:07:52 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/18 00:47:28 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie::Zombie(void) : _name("")
{
	// Default constructor array allocation
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " created." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " destroyed." << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/*
Zombie	*newZombie(std::string name)
{
	return (new Zombie(name));
}

void	randomChump(std::string name)
{
	Zombie zoom(name);
	zoom.announce();
}
*/
