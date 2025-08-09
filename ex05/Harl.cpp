/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:58:26 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 22:24:14 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl is Karen-ing up!" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl got banned from the restaurant." << std::endl;
}

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You don’t put enough!" << std::endl;
	std::cout << "If you want to have a burger without extra bacon, you should just go to McDonald's!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager, NAAHW!1!!" << std::endl;
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*ComplaintFunction)();
	struct Complaint
	{
		std::string level;
		ComplaintFunction function;
	};
	
	Complaint complaints[] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};

	for (int i = 0; i < 4; ++i) {
        if (level == complaints[i].level) {
            (this->*complaints[i].function)();
            return;
        }
    }
	std::cout << "[ UNKNOWN ] Harl did not prepare drama for this level." << std::endl;
}
