/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:06:41 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/22 20:21:15 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
#define	FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		bool			_signed;
		const int		_gradeToSign;
		const int		_gradeToExecute;

	public:
		Form();
		~Form();
		Form(const std::string& name, const int sign_grade, const int execute_grade);
		Form(const Form& other);
		Form& operator=(const Form& other);

		const 	std::string&	getName() const;
		bool	returnSigned() const;
		int	getGradeSign() const;
		int	getGradeExecute() const;
		
		void	beSigned(const Bureaucrat& cat); // Throws: if grade low

	class	GradeTooHighException : public std::exception
	{
		public:
			const char*  what() const  throw(); 
	};

	class	GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

inline	std::ostream& operator<<(std::ostream& os, const Form& form)
{
	return os	<< "Form " << form.getName()
			<< " [signed: " << (form.returnSigned() ? "yes" : "no")
			<< ", sign grade: " << form.getGradeSign()
			<< ", execute grade: " << form.getGradeExecute() << "]";
}

#endif

/*
References:
	1. https://42tutor.com/guides/05-exceptions/
*/
