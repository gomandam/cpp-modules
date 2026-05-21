/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:37:49 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/21 18:14:43 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype> // std::toupper

void	OneArgument()
{
	std::cout << "\ninsert for loop\n";
}

int	main(int argc, char *argv[])
{
	(void)argv;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
		OneArgument();
	return (0);
}

// files and class names are in UpperCamelCase format
// compiled in "c++", "-std=c++98" and flags
//
// NOTE: module 02-09 use Orthodox Canonical Form
