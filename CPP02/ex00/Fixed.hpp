/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 23:08:33 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/15 03:15:57 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <string>
#include <cstdlib>

#define RawUnits 256	// _fractionalBits = 8, since BINARY is base(2) = 2^8

class Fixed
{
	public:
		Fixed(void);				
		~Fixed(void);
		Fixed(const Fixed& other);		// Copy Constructor, 'const' reference to avoid infinite recursion. Avoid copy + allow const objects
		Fixed& operator=(const Fixed& other);	// Copy Assignment Operator, check self-assignment before deallocating to avoid bugs from use/after/free. Reference chains a = b = c
		
	int	getRawBits(void) const;	// 'const' prevents modification of object state
	void	setRawBits(int const raw); 

	private:
		int			_fixedPointValue;
		static int const	_fractionalBits = 8;
};

#endif

/*
Default Constructor: Initializes an object with default values when no arguments are provided
Destructor: Cleans up resources and deallocates memory when an object is destroyed
Copy Constructor: Creates a new object as a copy of an existing object
Copy Assignment Operator: Assigns the contents of one existing object to another existing object

If your class manages dynamic memory uses (new/delete), must define all three: destructor, copy constructor, and copy assignment operator. Omitting will cause memory leaks or undefined behavior.
*/
