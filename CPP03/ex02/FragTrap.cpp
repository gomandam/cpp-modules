/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:09:32 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/05 20:49:25 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("[FragTrap Default]")
{
	this->_hitPoints	= 100;
	this->_energyPoints	= 100;
	this->_attackDamage	= 30;
	std::cout << "[FragTrap] Default Constructor called: " << _name << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
		// , _hitPoints(100), _energyPoints(100), _attackDamage(30)
{
	_hitPoints	= 100;
	_energyPoints	= 100;
	_attackDamage	= 30;
	std::cout << "[FragTrap] Constructor called: " << _name << std::endl;
} 

FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap] Destructor called: " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "[FragTrap] Copy Constructor called: " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "[FragTrap] " << _name << ": Copy Assignment Operator called.\n";
	return (*this);
}

void	FragTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "[FragTrap] " << _name << " can't attack, insufficient HIT POINTS.\n";
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "[FragTrap] " << _name << " can't attack, insufficient ENERGY POINTS.\n";
		return ;
	}
	--_energyPoints;
	std::cout << "[FragTrap] " << _name << " attacks " << target << ", causing " << _attackDamage << " damage points!\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "[FragTrap] HIGH-FIVE-GUYS: request the guys to high five some five high guys.\n";
}
