/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:12:57 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 21:10:58 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
		// Test with HumanA which cannot have a null weapon
		Weapon banana = Weapon("brown banana");
		HumanA vrushank("Vrushank", banana);
		// Vrushank can attack with the weapon
		vrushank.attack();
		// Vrushank can change the weapon type
		banana.setType("oxidated banana");
		// Vrushank can attack with the new weapon type
		vrushank.attack();
		
		// Test with HumanB which can have a null weapon
		banana = Weapon("black banana");
		HumanB jonas("Jonas");

		// Jonas has no waeapon at the beginning
		jonas.attack();
		// Jonas can set a weapon later
		jonas.setWeapon(banana);
		// Jonas can attack with the weapon
		jonas.attack();
		// Jonas can change the weapon type
		banana.setType("very ripe and oxidated banana");
		// Jonas can attack with the new weapon type
		jonas.attack();
	return (0);
}
