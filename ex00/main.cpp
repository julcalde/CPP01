/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:47:10 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 21:12:37 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	// Create a Zombie on the heap and announce it
	Zombie* zombie1 = newZombie("Zombo");
	zombie1->announce();
	delete zombie1;
	// Create a Zombie on the stack and announce it
	randomChump("kiZombie");
	return (0);
}
