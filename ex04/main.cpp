/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:20:06 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 21:48:37 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	// Check if the correct number of arguments is provided
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	
	// Assign command line arguments to variables
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	
	// Check if s1 and s2 are not empty
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: s1 and s2 cannot be empty." << std::endl;
		return (1);
	}
	
	// Open the input file and check if it is opened successfully
	std::ifstream inFile(filename.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error: Cannot open input file " << filename << std::endl;
		return (1);
	}
	
	// Open the output file and check if it is opened successfully
	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: Cannot open output file " << filename << ".replace" << std::endl;
		return (1);
	}

	// Read the content of the input file into a string
	std::string content;
	std::string line;
	while (std::getline(inFile, line))
	{
		content += line;
		if (!inFile.eof())
			content += "\n";
	}
	
	// Close the input file after reading
	inFile.close();
	
	// Replace all occurrences of s1 with s2 in the content
	std::string result;
	std::string::size_type pos = 0;	
	std::string::size_type pre = 0;
	while ((pos = content.find(s1, pre)) != std::string::npos)
	{
		result += content.substr(pre, pos - pre);
		result += s2;
		pre = pos + s1.length();
	}
	
	// Append the remaining part of the content after the last occurrence of s1
	result += content.substr(pre);
	
	// Write the modified content to the output file
	outFile << result;
	
	// Close the output file
	outFile.close();

	return (0);
}
