/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seasons.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 02:19:21 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/26 03:53:08 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// SWITCH-CASES: useful for sequential or cascading cases,
//	instead of using IF cases and FOR loops

#include <iostream>

int	main(void)
{
	int	month;
	std::cin >> month;
	std::string season;

	switch (month)
	{
		case 12:
		case 1:
		case 2:
			season = "Winter";
			break;
		case 3:
		case 4:
		case 5:
			season = "Spring";
			break;
		case 9: case 10: case 11:
			season = "Autumn";
			break;
		default:
			season = "Invalid month";
	}
	std::cout << season << std::endl;
	return (0);
}

/*
Create a program that takes a month number (1 for January, 2 for February, etc.)
and prints the season it belongs to. Use a switch statement for the logic.

The seasons and their corresponding months are:

    Winter: December (12), January (1), February (2)
    Spring: March (3), April (4), May (5)
    Summer: June (6), July (7), August (8)
    Autumn: September (9), October (10), November (11)
    Invalid month: for other options
*/
/*
// WRONG IMPLEMENTATION OF SWITCH CASES
#include <iostream>

int main() {
    int month;
    std::cin >> month;
    std::string season = "";
    
    // Write your code below
    switch (month)
    {
        case (month == 12 || month <= 2):
            season = "Winter";
            break;
        case (month >= 3 && month <= 5):
            season = "Spring";
            break;
        case (month >= 6 && month <= 8):
            season = "Summer";
            break;
        case (month >= 9 && month <= 11):
            season = "Autumn";
            break;
        defualt:
            season = "Invalid month";
    }
    
    std::cout << season << std::endl;
    return 0;
}
*/
