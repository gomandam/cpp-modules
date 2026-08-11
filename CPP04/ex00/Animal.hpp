/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:08:22 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/12 00:58:36 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP
#define	ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal(void);
	virtual	~Animal(void);					// virtual Destructor: ensures DERIVED destructor (Animal as BASE class) called through base pointer

		Animal(const Animal& other);
		Animal& operator=(const Animal& other);

	virtual void	makeSound() const;			// virtual: allows runtime polymorphism
	std::string	getType(void) const;

	protected:
		std::string	_type;
};

#endif

/*
	PURE VIRTUAL "= 0": class provides no implementation, derived class must override
	ABSTRACT CLASS: any class with at least 1 pure virtual





*/
