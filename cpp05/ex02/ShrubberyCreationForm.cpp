/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:21:00 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/16 14:35:04 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>	

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
AForm("ShrubberyCreationForm", 145, 137), _target(target)	{ }

ShrubberyCreationForm::~ShrubberyCreationForm()	
{
	std::cout << "[DESTROYED] ShrubberyCreationForm\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
AForm(other), _target(other._target)	{ }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	checkExecution(executor);
	// throws if not allowed

	std::ofstream file((_target + "_shrubbery").c_str());
	file << "                                " << std::endl;
	file << "                                " << std::endl;
	file << "              .-º`´             " << std::endl;
	file << "         .- º`/*·*`..·          " << std::endl;
	file << "         ¨`.#ł*^|¶·'*.¨         " << std::endl;
	file << "        -.·¶·=·:#^/`¶.·         " << std::endl;
	file << "          :^*ł_¶=|·=|/~         " << std::endl;
	file << "        ¨·\\¨_#·#·¶~_-.`        " << std::endl;
	file << "          .-*.·||_/*º.          " << std::endl;
	file << "           `   || ´             " << std::endl;
	file << "     .- _.__.-/*·\\.¨-.__._     " << std::endl;
	file << "- -_.-_` ._-/*.%*¨łˀ· º-_-_¨._. " << std::endl;
	file << "¨· - '.·_*··º_/-.··_*'..:-__¨´ ·" << std::endl;
	file << " ¨  ·¨._´-_:_._· -_'`¨__.-¨¨    " << std::endl;
	file << "     ¨    ._¨´¨.'`·  ,·¨¨  .    " << std::endl;
	file.close();
}
