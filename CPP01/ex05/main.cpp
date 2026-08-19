/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 16:18:49 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/01 22:01:10 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <cstdlib>

int	main(void)
{
	std::string	input;
	Harl	harlObject;

	bool	status = true;
	while (status)
	{
		std::cout << "Enter level: " << std::endl;
		std::cin >> input;
		harlObject.complain(input);
	}
	return (EXIT_SUCCESS);
}
