/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:23 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/04 01:59:17 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap] " << _name << " as DEFAULT constructor.\n";
}

ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "[ClapTrap] " << _name << " as constructor.\n";
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "[ClapTrap] " << _name << " was destroyed.\n";
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints),
			_energyPoints(other._energyPoints), _attackDamage(other._attackDamage) 
{
	std::cout << "[ClapTrap] " << _name << " copy constructed.\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name 		= other._name;
		_hitPoints 	= other._hitPoints;
		_energyPoints 	= other._energyPoints;
		_attackDamage 	= other._attackDamage;
	}
	std::cout << "[ClapTrap] " << _name << " copy-assigned.\n";
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
	{
		std::cout << "[ClapTrap] " << _name << " can't attack, no HIT POINTS left. \n";
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "[ClapTrap] " << _name << " can't attack, insufficient ENERGY POINTS. \n";
		return ;
	}
	_energyPoints -= 1;
	std::cout << "[ClapTrap] " << _name << " attacks " << target << ", with " << _attackDamage << " amount of damage.\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "[ClapTrap] " << _name << " has zero hit points. \n";
		return ;
	}
	if (amount >= static_cast<unsigned int>(_hitPoints))
		_hitPoints = 0;
	else
		_hitPoints -= static_cast<int>(amount);
	std::cout << "[ClapTrap] " << _name << " takes " << amount << " damage points. Hit points: " << _hitPoints << ". \n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "[ClapTrap] " << _name << " can not repair, no hit points left. \n";
		return ;
	}
	if (_energyPoints <= 0)
	{
		std::cout << "[ClapTrap] " << _name << " can not repair, no ENERGY POINTS left. \n";
		return ;
	}
	_energyPoints -= 1;
	_hitPoints += static_cast<int>(amount);
	std::cout << "[ClapTrap] " << _name << " repairs itself with " << amount << " hit points. It is now: " << _hitPoints << ". \n";
}
