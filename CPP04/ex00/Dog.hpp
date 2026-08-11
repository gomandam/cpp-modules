/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:08:22 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/12 00:59:59 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP
#define	DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);

		Dog(const Dog& other);
		Dog& operator=(const Dog& other);

	void	makeSound() const;			// since Animal.hpp had a virtual function (abstract class), this overrides the same function (for Dog class)
};

#endif

/*
	makeSound() const; now has Dog Class specific implementation


*/
