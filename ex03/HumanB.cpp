/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:06:58 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 21:15:03 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

// Constructor for HumanB that takes a name and initializes the weapon to NULL
HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

// HumanB can set a weapon later
void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

// Attack method for HumanB that checks if a weapon is set
void HumanB::attack() const
{
	if (weapon)
		std::cout << name << " attacks with " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon at disposal" << std::endl;
}
