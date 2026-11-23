/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 16:12:51 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/22 21:26:52 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERYCREATIONFORM_HPP
#define	SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		~ShrubberyCreationForm();

		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);

		void	execute(Bureaucrat const& executor) const;
};

#endif
