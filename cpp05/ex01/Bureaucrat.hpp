/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:26:42 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/03 22:12:55 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception> // try & catch

// Forward declaration "Form": signForm usable
class Form;

class	Bureaucrat
{
	private:
		const std::string	_name;
		int			_grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade); 
		~Bureaucrat();
		
		Bureaucrat(const Bureaucrat& other);		// copy constructor
		Bureaucrat& operator=(const Bureaucrat& other);	// copy-assignment operator

		const std::string&	getName() const;
		int		getGrade() const;

		void	incrementGrade();
		void	decrementGrade();
		
		void	signForm(Form& form) const;	// Mandatory as Bureaucrat member fx

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

