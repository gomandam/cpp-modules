/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:06:41 by gomandam          #+#    #+#             */
/*   Updated: 2026/10/10 00:33:46 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
#define	FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool _signed;
		const int	_gradeToSign;
		const int	_gradeToExecute;

	public:
		Form(const  std::string& name, int gradetoSign, int gradetoExecute);
		Form(const Form& other);
		Form& operator=(const Form& other);
		~Form();

		const std::string&	getName() const;
		bool	returnSigned() const;
		int	getGradeSign() const;
		int	getGradeExecute() const;

		void	beSigned(const Bureaucrat& cat); // Throws: if grade low

	class	gradeTooHighException : public std::exception
	{
		public:
			const char*  what() const throw()
			{	return "Grade too high!";	}
	}

	class	gradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw()
			{	return "Grade too Low!";	}
	}
};

inline	std::ostream& operator<<(std::ostream& os, const Form& form)
{
	return os	<< "Form " << form.getName()
			<< " signed: " << (form.returnSigned() ? "yes" : "no")
			<< ", sign grade: " << form.getGradeSign()
			<< ", executed: " << form.getGradeExecute() << "]";
}

#endif

/*
References:
	1. https://42tutor.com/guides/05-exceptions/
 	2. 
*/
