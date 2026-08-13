/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:11:55 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/13 22:05:31 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
// Base Class Pointer: initialized to a new allocated object >> Animal, Dog, Cat
// Foundation of Polymorphism: "IS-A/An" Relationship
	const Animal* animal 	= new Animal();
	const Animal* dog 	= new Dog();
	const Animal* cat 	= new Cat();

	std::cout << "================================================== \n";
	std::cout << "         TESTS: getType() and makeSound()          \n";
	std::cout << "================================================== \n";
// getType() returns a string "the type" via (std::cout) while VIRTUAL makeSound() returns void
	std::cout << animal->getType() << ": ";
	animal->makeSound();
	std::cout << dog->getType() << ": ";
// VIRTUAL
	dog->makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	
	std::cout << "================================================== \n";
	std::cout << "     TEST: Cleanup with Destructorsi (virtual)      \n";
	std::cout << "================================================== \n";
// 
	delete animal;
	delete dog;
	delete cat;

	return (0);
}
