/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:06:30 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/18 01:03:29 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <exception>		// base of our exception classes

AForm::AForm(const std::string& name, const int  sign_grade, const int  execute_grade) :
  _name(name), _signed(false), _gradeToSign(sign_grade), _gradeToExecute(execute_grade)
{
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw GradeTooLowException();
}

AForm::AForm() : _name("Default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm Default Constructor.\n";
}

AForm::~AForm()	{ }

AForm::AForm(const AForm &other) :
  _name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign),
  _gradeToExecute(other._gradeToExecute) { }

// only constructors take base iniitializers ':'
AForm &AForm::operator=(const AForm &other)
{
	_signed = other._signed;
	return (*this);
}

// Member Function
void	AForm::beSigned(const Bureaucrat &cat)
{
	if (cat.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw GradeTooLowException();
}

const std::string&	AForm::getName() const
{	return (_name);			}

bool	AForm::returnSigned() const
{	return(_signed);		}

int	AForm::getGradeSign() const
{	return (_gradeToSign);		}

int	AForm::getGradeExecute() const
{	return (_gradeToExecute);	}

// Exceptions
const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("[exception] Grade to High.");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("[exception] Grade to Low.");
}

const char	*AForm::FormNotSignedException::what() const throw()
{
	return ("[exception] Form not signed.");
}

void	AForm::checkExecution(Bureaucrat const& executor) const
{
	if (!_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();
}
