/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 18:08:22 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/14 04:01:56 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WRONGANIMAL_HPP
#define	WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		// NOT VIRTUAL: intentional to have comparison

		WrongAnimal(const WrongAnimal& other);
		WrongAnimal& operator=(const WrongAnimal& other);

	std::string getType(void) const;
	void	makeSound() const;
	// NOT VIRTUAL: showcase intentional problem, static handling
	//  WrongCat overrides, WrongAnimal not called

	protected:
	std::string	_type;
};

#endif
