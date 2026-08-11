/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:08:22 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/11 00:48:26 by gomandam         ###   ########.fr       */
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

	void	makeSound() const;
};

#endif
