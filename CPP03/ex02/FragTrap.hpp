/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:09:49 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/04 18:17:18 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FRAGTRAP_HPP
#define	FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(const std::string& name);

		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);

	void	attack(const std::string& target);
	void	highFivesGuys(void);
	
	private:
};

#endif
