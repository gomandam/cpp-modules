/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 02:07:52 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/18 00:47:56 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(void);			// Default constructor
		Zombie(std::string name);	// Constructor Parameter
		~Zombie(void);			// Destructor
		void	announce(void);

	private:
		std::string	_name;
};

Zombie	*newZombie(std::string name);
// void	randomChump(std::string	name);
Zombie	*zombieHorde(int n, std::string name);

#endif
