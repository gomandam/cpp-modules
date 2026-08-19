/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 16:18:40 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/01 22:17:18 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_HPP
#define	HARL_HPP

#include <iostream>
#include <string>
#include <cstdlib> // EXIT 

class Harl
{
	public:
		Harl( /* ARGUMENTS */ );
		~Harl();

		void	complain(std::string	level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	exit(void);
};

#endif
