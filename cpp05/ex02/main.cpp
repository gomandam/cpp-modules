/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 13:26:33 by gomandam          #+#    #+#             */
/*   Updated: 2026/11/10 16:09:27 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "AForm.hpp"

#include <cstdlib>	// std::srand
#include <ctime>	// std::time
#include <fstream>	// std::ofstream

int	main(void)
{
	std::cout << "\n==================================\n";

	std::srand(std::time(NULL));	// generates a random number

	Bureaucrat king("King", 1);
	Bureaucrat pawn("Pawn", 140);

	std::cout << "\n============EDGE CASES============\n";

	
	

	std::cout << "\n=========INVALID INSTANCE=========\n";
	
	


	std::cout << "\n=========COPY CONSTRUCTOR=========\n";




	std::cout << "\n========ASSIGNMENT OPERATOR=======\n";
	
	
	
	return (0);
}

