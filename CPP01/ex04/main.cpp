/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 00:47:40 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/30 12:30:38 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Error: Invalid arguments." << std::endl;
		return (1);
	}
	Sed sedObject;
	if (sedObject.processFile(argv[1], argv[2], argv[3]) != 0)
		return (1);
	return (0);
}

/*
PURPOSE:
Perform global text replacement in memory by transforming "content"
every occurrence of s1 is replaced by s2, without using std::string::replace.

1. Initialize:
	result: output buffer
	start: current cursor (0)
	pos: first match index via content.find(s1, start)
2. While a match exists (pos != std::string::npos):
	Append untouched text before match: content.substr(start, pos - start)
	Append replacement token: s2
	Advance cursor after matched token: start = pos + s1.length()
	Search next match from updated cursor
3. After loop:
	Append remaining tail content from "start" to end
4. Return "result" as fully replaced content.

KEY CONCEPTS (CPP01/ex04):
	Use std::string::find + std::string::substr + concatenation
	Validate s1 is non-empty before replacement
	Pure transformation function: input text -> output text, no file I/O side effects
*/
