/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 23:08:33 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/16 01:08:28 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>
#include <sstream>

#define RawUnits 256	// _fractionalBits = 8, since BINARY is base(2) = 2^8

class Fixed
{
	public:
// REQUIRED CONSTRUCTORS (cpp02/ex01)
		Fixed(const int value);		// constructor const int: to be converted to fixed-point value
		Fixed(const float value);	// ctor float: converts to corresponding fixed-point value 

// ORTHODOX CANONICAL FORM
		Fixed(void);				// default ctor
		~Fixed(void);				// dtor
		Fixed(const Fixed& other);		// copy ctor
		Fixed& operator=(const Fixed& other);	// copy assignment ctor

// ENCAPSULATION	
	int	getRawBits(void) const;			// gets the FPV from the private class
	void	setRawBits(int const newValue); 	// sets the raw value

// CONVERSIONS
	float	toFloat(void) const;		// fixed point value to floating point value
	int	toInt(void) const;		// fixed point value to an integer value

	private:
		int			_fixedPointValue;
		static int const	_fractionalBits = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif

/*	Default Constructor: Initializes an object with default values when no arguments are provided
	Destructor: Cleans up resources and deallocates memory when an object is destroyed
	Copy Constructor: Creates a new object as a copy of an existing object
	Copy Assignment Operator: Assigns the contents of one existing object to another existing object

	If your class manages dynamic memory uses (new/delete), must define all three:
		DESTRUCTOR, COPY CONSTRUCTOR, and COPY ASSIGNMENT OPERATOR.
	Omitting causes memory leaks or undefined behavior.						*/
