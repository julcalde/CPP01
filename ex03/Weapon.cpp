/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:00:49 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 21:15:31 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

// Constructor for Weapon that initializes the type
Weapon::Weapon(std::string type) : type(type) {}

// method to get the type of the weapon
const std::string& Weapon::getType() const
{
	return (type);
}

// method to set the type of the weapon
void Weapon::setType(std::string type)
{
	this->type = type;
}
