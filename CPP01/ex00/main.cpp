/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 01:48:17 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/16 19:56:39 by gomandam         ###   ########.fr       */
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
PURPOSE:
Illustrate and differentiate between Stack and Heap memory allocation using Zombie objects as practical examples.

KEY CONCEPTS:
1. STACK ALLOCATION (randomChump)
	Automatic allocation/deallocation on function call/exit
	Scope-based lifetime, Destructor automatic
	Cannot pass outside function scope

2. HEAP ALLOCATION (newZombie)
	Manual allocation with 'new'
	Manual deallocation with 'delete'
	Lifetime independent of scope
	Must explicitly call destructor via 'delete'
	Can return and use outside function scope
	Memory leaks if 'delete' forgotten

3. POINTER
	Stack: direct object access (Zombie z)
	Heap: pointer to object (Zombie* z)
	Heap requires dereference (z->method() or (*z).method())
*/
