/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:21:00 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/12 03:10:36 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>	// ADDED: needed for std::ofstream (was previously pulled in indirectly)

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
AForm("ShrubberyCreationForm", 145, 137), _target(target)	{ }

ShrubberyCreationForm::~ShrubberyCreationForm()	// FIXED: was '~ShrubberyCreationForm::ShrubberyCreationForm()' (invalid syntax)
{
	std::cout << "[DESTROYED] ShrubberyCreationForm\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
AForm(other), _target(other._target)	{ }	// FIXED: copy the _target as well

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	checkExecution(executor);	// throws if not allowed
	
	std::ofstream file((_target + "_shrubbery").c_str());
	file <<   "                             " << std::endl;
	file <<   "                             " << std::endl;
	// CHANGED: replaced C++11 raw string literals R"(...)" with C++98-compatible escaped strings
	file << "            .-º`´           " << std::endl;
	file << "       .- º`/*·*`..·        " << std::endl;
	file << "        `.#\\^|¶·'*.         " << std::endl;
	file << "       .·¶·=·:#^/`¶.·       " << std::endl;
	file << "        :^\\_¶=|·=|/~        " << std::endl;
	file << "       -·\\_#·#·¶~_-.`       " << std::endl;
	file << "        .-*.·||_/*º.        " << std::endl;
	file << "         `   || ´           " << std::endl;
	file << "  _._ _.__.-/*\\\\-.__._ _ .  " << std::endl;
	file << "-_.-_` ._-/*.%!\\ˀ\\º-_-_·._.`" << std::endl;
	file << " - '.·_*··º_/-.··_ '..:-__ ´" << std::endl;
	file << "'   ._ -_:_._· -_'` __.-   -" << std::endl;
	file << "  __    ._   .'`·  ,    _.  " << std::endl;
	file.close();
}
