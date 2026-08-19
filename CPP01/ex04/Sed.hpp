/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 00:13:58 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/30 02:15:59 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SED_HPP
#define	SED_HPP

#include <iostream>
#include <string>
#include <fstream>

class Sed
{
	public:
		Sed();
		~Sed();

		int	processFile(const std::string& filename,
				const std::string& s1,
				const std::string& s2);
	
	private:
		std::string	replaceAllOccurences(const std::string& content,
					const std::string& s1,
					const std::string& s2);
};

#endif
