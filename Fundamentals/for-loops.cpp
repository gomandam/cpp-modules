/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for-loops.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:13:50 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/29 17:26:30 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
    // Write your code below
    int start = 3;

    for (int i = 3; i <= 27 ; i++)
    {
        std::cout << "Hello: " << start << std::endl;
        start++;
    }
    return 0;
}
