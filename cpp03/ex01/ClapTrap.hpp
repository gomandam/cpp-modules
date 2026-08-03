/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:33 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/03 18:00:36 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <cctype>

class ClapTrap
{
	public:
		ClapTrap(const std::string& name);
		~ClapTrap(void);

		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
