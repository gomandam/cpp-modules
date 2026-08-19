/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:11:55 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/17 00:21:12 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

// Verify polymorphic allocation/deletion through Animal*
// Creates Dog (0-4) & Cat (5-9) -> Deletes (0-9) array
// NOTE: both Dog/Cat casted to Animal* for C++98 compliance
static void	arrayTest(void)
{
	const int	size = 10;
	Animal*		animals[size];
	
	std::cout << "======== array[10] (5 Dogs,5 Cats) ========\n";
	for (int i = 0; i < size; ++i )
		animals[i] = (i < size / 2) ? (Animal*)new Dog() : (Animal*)new Cat();
	for (int i = 0; i < size; ++i)
		delete	animals[i];
}

// Runtime polymorphism (virtual makeSound)
// Call makeSound() through Animal* pointing to Dog/Cat
static void	soundTest(void)
{
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();

	std::cout << "======= makeSound->(virtual access) =======\n";
	std::cout << dog->getType() << ": ";
	dog->makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();

	delete	dog;	delete	cat;	std::cout << std::endl;
}

// Cat copies are independent Brain objects (deep)
// Copies a Cat, modify copied Brain idea, check original if stays unchanged. 
static void	deepCopyTest(void)
{
	Cat	orignal;
	Cat	copy;

	std::cout << "======= Deep Copy Test (Cat Brains) =======\n";
	orignal.getBrain()->setIdea(0, "Original thought.");
	copy = orignal;
	copy.getBrain()->setIdea(0, "Replica of the idea.");

	std::cout << "Original idea[0]: " << orignal.getBrain()->getIdea(0) << std::endl;
	std::cout << "Replica idea[0]: " << copy.getBrain()->getIdea(0) << std::endl;
}


static void	subjectTest(void)
{
	const Animal*	a = new Dog();
	const Animal*	b = new Cat();

	std::cout << "======== Subject Test (cpp04/ex01) ========\n";
	delete	a;
	delete	b;
	std::cout << "===================END=====================\n";
}

int	main(void)
{
	arrayTest();
	soundTest();
	deepCopyTest();
	subjectTest();
	return (0);
}
