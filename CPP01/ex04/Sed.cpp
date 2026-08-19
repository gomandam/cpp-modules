/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 00:13:48 by gomandam          #+#    #+#             */
/*   Updated: 2026/07/01 22:48:09 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Sed.hpp"

Sed::Sed()
{
}

Sed::~Sed()
{
}

// find() searches for a substring within a string and returns the position index of first occurrences. Returns npos if nothing is found
// empty() checks if a string is empty, no characters, returns "true" if empty

std::string	Sed::replaceAllOccurences(const std::string& content,
				const std::string& s1,
				const std::string& s2)
{
	std::string	result;
	std::string::size_type	start;	// size_type required by .find();
	std::string::size_type	position;

	start = 0;
	position = content.find(s1, start);
	while (position != std::string::npos)	// find() !if return = npos
	{
		result += content.substr(start, position - start);
		result += s2;
		start = position + s1.length();
		position = content.find(s1, start);
	}
	result += content.substr(start);
	return (result);
}

int	Sed::processFile(const std::string& filename,
			const std::string& s1,
			const std::string& s2)
{
	if (filename.empty() || s1.empty())
	{
		std::cerr << "Error: filename and s1 are empty.";
		return (1);
	}
	
	std::ifstream	infile(filename.c_str());
	
	if (!infile.is_open())
	{
		std::cerr << "Error: input invalid. \n";
		return (1);
	}
	
	std::string	content;
	std::string	line;

	while (std::getline(infile, line))
	{
		content += line;
		if (!infile.eof())
			content += "\n";
	}

	infile.close();

	const std::string	outputName = filename + ".replace";
	std::ofstream		outfile(outputName.c_str());

	if (!outfile.is_open())
	{
		std::cerr << "Error: can not create output file." << outputName << std::endl;
		return (1);
	}

	outfile << replaceAllOccurences(content, s1, s2);
	
	if (!outfile.good())
	{
		std::cerr << "Error: invalid writing output file." << std::endl;
		outfile.close();
		return (1);
	}

	outfile.close();
	return (0);
}

// good() checks the overall state of the stream and returns true only if no error or end-of      -file conditions have occurred
// close() member function of stream objects (like std::ifstream, std::ofstream) closes currently open file, disconnects the stream from file
// is_open() checks whether file is currently open, and associated with the stream
// c_str() returns a pointer to a null terminated C-style character array "(const char)*"
// npos: static constant for no valid position, or not found