/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/28 00:13:48 by gomandam          #+#    #+#             */
/*   Updated: 2026/06/30 02:17:09 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Sed.hpp"

Sed::Sed()
{
}

Sed::~Sed()
{
}

std::string	Sed::replaceAllOccurences(const std::string& content,
				const std::string& s1,
				const std::string& s2)
{
	std::string	result;
	std::string::size_type	start;	// size_type required by .find();
	std::string::size_type	pos;

	start = 0;
	pos = content.find(s1, start);
	while (pos != std::string::npos)	// find() !if return = npos
	{
		result += content.substr(start, pos - start);
		result += s2;
		start = pos + s1.length();
		pos = content.find(s1, start);
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

	if (!outfile.good())	// good()
	{
		std::cerr << "Error: invalid writing output file." << std::endl;
		outfile.close();
		return (1);
	}

	outfile.close();
	return (0);
}

