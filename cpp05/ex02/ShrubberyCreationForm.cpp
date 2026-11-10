/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:21:00 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/10 16:40:27 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
AForm("ShrubberyCreationForm", 145, 137), _target(target)	{ }

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	checkExecution(executor);	// throws if not allowed
	
	std::ofstream file((_target + "_shruberry").c_str());
	file << "                 " << std::endl;
	file << "  :.: ·^·.  .:   " << std::endl;
	file << "   \·#\·|¶·_/    " << std::endl;
	file << "  ·¶·=¶|#^/_·.·  " << std::endl;
	file << "  ^\_·=#·=|/~    " << std::endl;
	file << "   ·\_#·#·¶~     " << std::endl;
	file << "     ||_/      " << std::endl;
	file << "       ||        " << std::endl;
	file << "      //\%\      " << std::endl;
	file << "  %^/^ %\\^%\^:  " << std::endl;
	file << "                 " << std::endl;
	file << "                 " << std::endl;
	file.close();
}
