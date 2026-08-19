/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:11:55 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/18 23:18:27 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

/*
  CONTRACT CONCEPT: (Abstract Class -> Animal)
	ABSTRACT class CAN'T  be instantiated. Only as blueprint ("contract") for DERIVED class
	Abstract (BASE class) defines what DERIVED class must do, without specifications
	Any (DERIVED class) that inherits must provide own implementation/specification

  Purposes:
	Guarantees behavior: Animal* can call makeSound() knowing it exists
	Enforced completeness: compiler won't instatiate a class without contract
	Enables polymorphism: write code that works with any Animal
*/

static void	arrayTest(void)
{
	const int	size = 10;
	Animal*		animals[size];
	
	std::cout << "======== Array[10] (5 Dogs,5 Cats) ========\n";
	for (int i = 0; i < size; ++i )
		animals[i] = (i < size / 2) ? (Animal*)new Dog() : (Animal*)new Cat();
	for (int i = 0; i < size; ++i)
		delete	animals[i];
}
// Verify polymorphic allocation/deletion through Animal*
// Creates Dog (0-4) & Cat (5-9) -> Deletes (0-9) array
// NOTE: both Dog/Cat casted to Animal* for C++98 compliance

static void	deepCopyTest(void)
{
	Dog	orignal;
	Dog	copy;

	std::cout << "======= Deep Copy Test (Dog Brains) =======\n";
	orignal.getBrain()->setIdea(0, "Original thought.");
	copy = orignal;
	copy.getBrain()->setIdea(0, "Replica of the idea.");

	std::cout << "Original idea[0]: " << orignal.getBrain()->getIdea(0) << std::endl;
	std::cout << "Replica idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;
	std::cout << "========== Destructor Life Cycle ==========\n";
}
// Dog copies are independent Brain objects (deep)
// Copies a Dog, modify copied Brain idea, check original if stays unchanged. 

int	main(void)
{
	arrayTest();
	deepCopyTest();
	std::cout << "===================END=====================\n";
	return (0);
}

/*
	Animal	  pet;           ERROR: cannot instantiate abstract class
	Animal*	  ptr;           OK: can have pointer to abstract class
	ptr =	  new Dog();     OK: can point to concrete derived class
*/
