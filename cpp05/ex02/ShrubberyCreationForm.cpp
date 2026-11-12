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

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
AForm("ShrubberyCreationForm", 145, 137), _target(target)	{ }

~ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::cout << "[DESTROYED] ShrubberyCreationForm\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
AForm(other)	{ }

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
	file << R"(            .-º`´           )" << std::endl;
	file << R"(       .- º`/*·*`..·        )" << std::endl;
	file << R"(        `.#\^|¶·'*.         )" << std::endl;
	file << R"(       .·¶·=·:#^/`¶.·       )" << std::endl;
	file << R"(        :^\_¶=|·=|/~        )" << std::endl;
	file << R"(       -·\_#·#·¶~_-.`       )" << std::endl;
	file << R"(        .-*.·||_/*º.        )" << std::endl;
	file << R"(         `   || ´           )" << std::endl;
	file << R"(  _._ _.__.-/*\\-.__._ _ .  )" << std::endl;
	file << R"(-_.-_` ._-/*.%!\ˀ\º-_-_·._.`)" << std::endl;
	file << R"( - '.·_*··º_/-.··_ '..:-__ ´)" << std::endl;
	file << R"('   ._ -_:_._· -_'` __.-   -)" << std::endl;
	file << R"(  __    ._   .'`·  ,    _.  )" << std::endl;
	file.close();
}
