/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:58:26 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 22:35:50 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl is Karen-ing up!\n" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl got banned from the restaurant.\n" << std::endl;
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!\n" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You don’t put enough!" << std::endl;
	std::cout << "If you want to have a burger without extra bacon, you should just go to McDonald's!\n" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager, NAAHW!1!!\n" << std::endl;
}

// The complain method processes the complaint level and calls the appropriate function
void	Harl::complain(std::string level)
{
	// Using a function pointer array to map complaint levels to their corresponding methods
	typedef void (Harl::*ComplaintFunction)();
	struct Complaint
	{
		std::string level;
		ComplaintFunction function;
	};
	
	// Array of complaint levels and their corresponding functions
	Complaint complaints[] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};

	// Check if the level matches any of the predefined complaint levels
	for (int i = 0; i < 4; ++i) {
        if (level == complaints[i].level) {
            (this->*complaints[i].function)();
            return ;
        }
    }
	
	// If no match is found, print an unknown message
	std::cout << "[ UNKNOWN ] Harl did not prepare drama for this level.\n" << std::endl;
}
