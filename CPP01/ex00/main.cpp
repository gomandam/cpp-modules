/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 01:48:17 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/16 17:40:53 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

int	main(void)
{
	std::cout << "___ Stack Allocation (randomChump) ___" << std::endl;
	randomChump("StackZombie");
	std::cout << std::endl;

	std::cout << "___ Heap Allocation (newZombie) ___" << std::endl;
	Zombie *heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	std::cout << std::endl;

	std::cout << "___ Manual Cleanup ___" << std::endl;
	delete heapZombie;
	std::cout << std::endl;

	return (0);
}

/*
Only to illustrate new and delete from the zombie objects
Describe and differentiate Heap from Stack
*/
