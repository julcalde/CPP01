/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:12:57 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 21:04:07 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
		Weapon banana = Weapon("brown banana");
		HumanA vrushank("Vrushank", banana);
		vrushank.attack();
		banana.setType("oxidated banana");
		vrushank.attack();
		
		banana = Weapon("black banana");
		HumanB jonas("Jonas");
		jonas.setWeapon(banana);
		jonas.attack();
		banana.setType("very ripe and oxidated banana");
		jonas.attack();
	return (0);
}
