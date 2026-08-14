/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:11:55 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/14 02:43:30 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
// Base Class Pointer: Initialized to a new allocated object >> Animal, Dog, Cat
// Foundation of Polymorphism: "IS-A/An" Relationship
	std::cout << "================================================== \n";
	std::cout << "           Class Pointer: Allocate *new*           \n";
	std::cout << "================================================== \n";
	const Animal* animal 	= new Animal();
	std::cout << std::endl;
	const Animal* dog 	= new Dog();
	std::cout << std::endl;
	const Animal* cat 	= new Cat();
	std::cout << std::endl;

	std::cout << "================================================== \n";
	std::cout << "         TESTS: getType() and makeSound()          \n";
	std::cout << "================================================== \n";
// getType() returns a string "the type" via (std::cout) while VIRTUAL makeSound() returns void
	std::cout << animal->getType() << ": ";
	animal->makeSound();
	
	std::cout << dog->getType() << ": ";
	dog->makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	
	std::cout << "\n================================================== \n";
	std::cout <<   "     TEST: Cleanup with Destructors (VIRTUAL)      \n";
	std::cout <<   "================================================== \n";
// Delete objects: Free memory from leaks, VIRTUAL so we don't call BASE destructor 
	delete	animal;
	std::cout << std::endl;
	delete	dog;
	std::cout << std::endl;
	delete	cat;
	std::cout << std::endl;

	std::cout << "================================================== \n";
	std::cout << "TEST: Demonstration Non-virtual (Not Polymorphism) \n";
	std::cout << "================================================== \n";
// Broken Polymorphism: Illustrates a wrong implementation usisng NON-virtual
	const WrongAnimal* xAnimal	= new WrongAnimal();
	const WrongCat*    xCat		= new WrongCat();

	std::cout << "\n================================================== \n";
	std::cout <<   "      TEST: makeSound() Non-virtual (Broken)       \n";
	std::cout <<   "================================================== \n";
// WrongCat & WrongAnimal: exactly the same, but without VIRTUAL implementation
// Without VIRTUAL: shows problems, CORRECT OUTPUT: "meow!"
	xCat->makeSound();
// Calls WrongAnimal::makeSound() at compile time
	xAnimal->makeSound();

	std::cout << "\n================================================== \n";
	std::cout <<   "   TEST: Clean-up Destructors (WITHOUT VIRTUAL)    \n";
	std::cout <<   "================================================== \n";
// DELETE: without VIRTUAL, 
	delete	xAnimal;
	delete	xCat;

	std::cout << "\n================================================== \n";
	std::cout <<   "        TEST: Direct Object Instantiation          \n";
	std::cout <<   "================================================== \n";
// NO POINTERS: Stack allocation, not heap. Constructor called directly. makeSound() direct member called OBJECT
	// No polymorphism needed. Dog at compile time. Direct call Dog::makeSound()
	Dog	objectDog;
	objectDog.makeSound();
	std::cout << std::endl;
	// No polymorphism needed. Cat at compile time. Direct call Cat::makeSound()
	Cat	objectCat;
	objectCat.makeSound();
	std::cout << std::endl;


	return (0);
}


/* THINGS TO DO: review functions, and implementations
 	I.  CHECK WHICH ONES SHOULD BE VIRTUAL, is it only ANIMAL.hpp or CAT & DOG
	II. 

*/
