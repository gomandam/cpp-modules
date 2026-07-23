/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 20:29:06 by gomandam          #+#    #+#             */
/*   Updated: 2026/05/23 00:48:50 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <cstdlib>

class Human				// user-defined datatype
{
	public:				// what is this? and why with ':'
		std::string name;
		std::string occupation;
		int age;		// std:: not needed?
	
		void eat()
		{	std::cout << "Action: eating\n";	}
		
		void drink()
		{	std::cout << "Action: drinking\n";	}
		
		void sleep()
		{	std::cout << "Action: sleeping\n";	}
};

int	main(void)
{
	Human human1;			// used like a datatype
	
	human1.name = "Danpoi";
	human1.occupation = "scientists";
	human1.age = 30;

	std::stringstream str_age;			// create empty stringstream/buffer
	str_age << human1.age; 				// insert INT value to stringstream 'str_age'
	std::string string_result = str_age.str();  	// assigns value to string varaiable

	std::cout << "Name: " << human1.name << std:: endl;
	std::cout << "Occupation: " << human1.occupation << std:: endl;
	std::cout << "Age: " << string_result << std::endl;
	std::cout << "The great " << human1.name << std:: endl;
	
	std::cout << "Print Memory Address of 'Age': " << str_age << std::endl;

//	string age_ = to_string(human1.age);
//	result << atoi(human1.age);	
//	std::cout << "Age: " << result << std:: endl;
	return (0);
}

/*
There are 4 major methods to convert a number to a string, which are as follows:

	std::stringstream - 
	
	ITOA() - purely C-style, C-standard library
	to_string() - printf and C-style, prohibited in C++98
    
	sprintf() function - prohibited in C++98
	boost lexical cast - prohibited in C++98
*/
