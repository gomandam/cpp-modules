/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:26:42 by gomandam          #+#    #+#             */
/*   Updated: 2026/09/23 02:34:06 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception> // try & catch

class	Bureaucrat
{
	private:
		const std::string	_name;
		int			_grade;

	public:
// Constructors
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade); 
		~Bureaucrat();
		
		Bureaucrat(const Bureaucrat& other);		// copy constructor
		Bureaucrat& operator=(const Bureaucrat& other);	// copy-assignment operator

// Member Functions
		const std::string&	getName() const;
		int		getGrade() const;

		void	incrementGrade();
		void	decrementGrade();

// Exceptions
	class	GradeTooHighException : public std::exception
	{
		public:
			virtual	const char*	what(void) const throw();	
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			virtual const char*	what(void) const throw();
	};
};

inline std::ostream&	operator<<(std::ostream& o, Bureaucrat const &other)
{
	return o << other.getName() << " \"the Bureaucrat\" got a grade of -> " << other.getGrade();
}

#endif

/* NOTES:
	RTFM exception implementation 
	what(void) throw();

	try	: contains code that might fail
	throw	: signals error occurrence
	catch	: handles the error
*/
