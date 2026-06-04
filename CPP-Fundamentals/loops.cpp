/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loops.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 03:18:54 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/30 03:28:22 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
Write a program that first accepts an integer n, representing how many additional 
whole numbers will be entered next. Then, read exactly n whole numbers from the input.
Finally, compute and print the sum of those n numbers (excluding the first input).
*/

#include <iostream>

int main()
{
	int numLoops;
	std::cin >> numLoops;
	int sum = 0;
    // Iterate numLoops times
    // In each iteration get the input using std::cin >> num;
    	while (numLoops > 0)
	{
		int	num;
		std::cin >> num;
		sum = sum + num;
		--numLoops;
	}
	std::cout << sum << std::endl;
	return 0;
}

