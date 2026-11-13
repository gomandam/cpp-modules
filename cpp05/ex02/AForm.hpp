/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 15:31:43 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/14 00:00:00 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AFORM_HPP
#define	AFORM_HPP

#include <string>	// ADDED: AForm needs std::string for _name and the getters
#include <iostream>	// ADDED: AForm needs std::ostream for the insertion operator
#include <exception>	// ADDED: AForm's exception classes derive from std::exception

class	Bureaucrat;	// ADDED: forward declaration so the header stays self-contained

class	AForm
{
	private:
		const std::string	_name;
		bool			_signed;
		const int		_gradeToSign;
		const int		_gradeToExecute;

	public:
		AForm();
		~AForm();
		AForm(const std::string& name, const int sign_grade, const int execute_grade);
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);	// FIXED: was 'const Form&'; AForm's copy-assignment must take an AForm

		const	std::string&	getName() const;
		bool	returnSigned() const;
		int	getGradeSign() const;
		int	getGradeExecute() const;

		void	beSigned(const Bureaucrat& cat);

		virtual void	execute(Bureaucrat const& executor) const = 0;	// pure virtual => AForm cannot be instantiated

		class GradeTooHighException : public std::exception	// ADDED: thrown when a grade is below 1
		{
			public:
				const char*	what() const throw();	// defined out-of-line in AForm.cpp
		};

		class GradeTooLowException : public std::exception	// ADDED: thrown when a grade is above 150
		{
			public:
				const char*	what() const throw();	// defined out-of-line in AForm.cpp
		};

		class FormNotSignedException : public std::exception	// thrown when executing a form that is not signed
		{
			public:
				const char*	what() const throw();	// MOVED: definition now lives in AForm.cpp, not the header
		};

	protected:
		void	checkExecution(Bureaucrat const& executor) const;	// shared signed/grade check for derived execute()
};

inline	std::ostream& operator<<(std::ostream& os, const AForm& aform)
{
	return os	<< "AForm " <<  aform.getName()
			<< " signed: " << (aform.returnSigned() ? "yes" : "no")
			<< ", sign grade: " << aform.getGradeSign()
			<< ", executed: " << aform.getGradeExecute() << ']';
}

#endif
