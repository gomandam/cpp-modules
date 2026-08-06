/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 21:23:33 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/04 01:32:09 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const std::string& name);
		virtual ~ClapTrap(void);			// Inheritance

		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);

	virtual void	attack(const std::string& target);	// Override
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
