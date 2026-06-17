/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 20:02:12 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/17 21:24:32 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "___ Zombie Horde Allocation ___" << std::endl << std::endl;
	
	std::cout << "__ Create Horde of Zombies ___" << std::endl;
	Zombie *horde = zombieHorde(10, "Zoooooooooombies");
	std::cout << std::endl;

	std::cout << "___ Each Zombie Announces ___" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Zombie[" << i << "]: ";
		horde[i].announce();
	}
	std::cout << std::endl;

	std::cout << "__ Deallocate Horde of Zombies ___" << std::endl;
	delete[] horde;
	std::cout << std::endl;

	return (0);
}
