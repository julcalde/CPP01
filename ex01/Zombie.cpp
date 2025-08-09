/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:10:20 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 19:35:27 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

// Constructor that initializes the Zombie with a name.
Zombie::Zombie(std::string name) : name(name) {}

// Destructor that announces the death of the Zombie.
Zombie::~Zombie()
{
	std::cout << name << " died. This time for good!" << std::endl;
}

// Method that makes the Zombie announce itself.
void Zombie::announce(void) const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
