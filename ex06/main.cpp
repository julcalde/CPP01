/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:56:56 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 23:02:14 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

// Function to convert complaint level string to an integer index
// @param: level - the complaint level as a string
// @return: an integer representing the complaint level
// @return: -1 if the level is not recognized
int getComplaintLevel(const std::string &level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
		{
			return (i);
		}
	}
	return (-1);
}

/*
 * Main function to handle command line arguments and trigger Harl's complaints
 * @param argc - argument count
 * @param argv - argument vector containing the complaint level
 * @return 0 on success, 1 on failure
*/
int main(int argc, char **argv)
{
	// Check if the correct number of arguments is provided
	if (argc != 2)
	{
		std::cerr << "Usage: " << argv[0] << " <complaint_level>" << std::endl;
		return (1);
	}
	
	// Create an instance of Harl to handle complaints
	Harl	harl;
	
	// Convert the input level to an integer index
	std::string level = argv[1];
	int complaintLevel = getComplaintLevel(level);
	
	// This switch statement will call the appropriate complaint method based on the level
	switch (complaintLevel)
	{
		// If the level is DEBUG, INFO, WARNING, or ERROR, it will call the respective methods
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break ;

		// If the level is not recognized, the terminal will output a default message
		default:
			std::cout << "[ Probably contemplating asocial steps to take ]\n" << std::endl;
			break ;
	}
	return (0);
}
