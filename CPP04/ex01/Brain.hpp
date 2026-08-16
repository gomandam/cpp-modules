/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 03:57:21 by gomandam          #+#    #+#             */
/*   Updated: 2026/08/16 06:18:44 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define	BRAIN_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Brain
{
	public:
		Brain(void);
		~Brain(void);

		Brain(const Brain& other);
		Brain& operator=(const Brain& other);

	void	setIdea(int index, const std::string& idea);
	std::string	getIdea(int index) const;

	private:
		std::string 	_ideas[100];
};

#endif
