/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:06:30 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/02 23:27:30 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name, const int  sign_grade, const int  execute_grade)
{
	_name = name;
	_signed = false;
	_gradeToSign = sign_grade;
	_gradeToExecute = execute_grade;
}

Form::Form()
{
	this->_name = "Default";
	this->_signed = false;
	this->_gradeToSign = 150;
	this->_gradeToExecute = 150;
	std::cout << "Form Default Constructor.\n";
} // to clarify pointer to member function

Form::~Form()	{ }

Form::Form(const Form &other) :
	_name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign),
	_gradeToExecute(other._gradeToExecute) { }

Form &Form::operator=(const Form &other) : _signed(other._signed)
{
	return (*this);
}

// Member Function
void	Form::beSigned(const Bureaucrat &cat)
{
	if (bureaucrat.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw GradeTooLowException();
}

std::string	Form::getName() const
{
	return (_name);
}

bool	Form::returnSigned() const
{
	return(_signed);
}

int	Form::getGradeSign() const
{
	return (_gradeToSign);
}

int	Form::getGradeExecute() const
{
	return (_gradeToExecute);
}

// Exceptions
const char	*Form::gradeTooHighException::what() const throw()
{
	return ("[exception] Grade to High.");
}

const char	*Form::gradeTooLowException::what() const throw()
{
	return ("[exception] Grade to Low.");
}


