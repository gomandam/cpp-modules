/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 02:07:52 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/17 21:13:48 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	Zombie *horde = new Zombie[n];
	for (int i = 0; n > i; i++)
		new (horde + i) Zombie(name);
	return (horde);
}

/*
	Allocates zombie objects to horde
	Constructor called automatically 'n' times
	Returns pointer to first element
*/
