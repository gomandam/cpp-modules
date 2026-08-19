/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-while.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 22:14:03 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/29 22:28:57 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    // Initialize variables
 	int sum = 0;
	int number = 1;
    // Your code here
    do
    {
	sum += number;
	std::cout << "The sum value: " << sum << std::endl;
	std::cout << "The number value: " << number << std::endl;
	number += 2;
    }
    while (number <= 50);

    std::cout << "Final Sum: " << sum << std::endl;
    return 0;
}
