/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:37:49 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/21 23:40:43 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype> // std::toupper

void	toUppercase(int	argc, char *argv[])
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			std::cout << (char)std::toupper(argv[i][j]);
		}
		if (i < argc -1)
			std::cout << " ";
	}
}

int	main(int argc, char *argv[])
{
	(void)argv;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		toUppercase(argc, argv);
	std::cout << std::endl;
	return (0);
}

// files and class names are in upperCamelCase format
// compiled in "c++", "-std=c++98" and flags
// NOTE: module 02-09 use Orthodox Canonical Form
