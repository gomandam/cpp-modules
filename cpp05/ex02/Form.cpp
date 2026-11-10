/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:06:30 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/03 22:07:49 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// "const" member variables are initialized in constructor’s member initializer list.
// "const" can't be assigned later inside the constructor body.

Form::Form(const std::string& name, const int  sign_grade, const int  execute_grade) :
  _name(name), _signed(false), _gradeToSign(sign_grade), _gradeToExecute(execute_grade)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();
}

Form::Form() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form Default Constructor.\n";
}

Form::~Form()	{ }

Form::Form(const Form &other) :
  _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign),
  _gradeToExecute(other._gradeToExecute) { }

// only constructors take base iniitializers ':'
Form &Form::operator=(const Form &other)
{
	_signed = other._signed;
	return (*this);
}

// Member Function
void	Form::beSigned(const Bureaucrat &cat)
{
	if (cat.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw GradeTooLowException();
}
// class name (a type), can not be passed as object. use the parameter

const std::string&	Form::getName() const
{	return (_name);			}

bool	Form::returnSigned() const
{	return(_signed);		}

int	Form::getGradeSign() const
{	return (_gradeToSign);		}

int	Form::getGradeExecute() const
{	return (_gradeToExecute);	}

// Exceptions
const char	*Form::GradeTooHighException::what() const throw()
{
	return ("[exception] Grade to High.");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("[exception] Grade to Low.");
}

void	Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& error)
	{
		std::cout << getName() << " can not sign " << form.getName()
			  << " because " << error.what() << std::endl;
	}
}
