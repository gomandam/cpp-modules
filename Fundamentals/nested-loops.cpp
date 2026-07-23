/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nested-loops.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/30 01:35:46 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/03 04:45:12 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n ; j++) {
		if (i + j == n)
            		std::cout << i << " " << j << std::endl;
                }
    }
    return 0;
}
// if (i + j == n) since
// 1 + 3 = 4
// 2 + 2 = 4
// 3 + 1 = 4
