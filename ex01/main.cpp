/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:10:15 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 19:46:06 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	int N = 4;

	Zombie* horde = zombieHorde(N, "HordeZombie");
	if (horde)
	{
		for (int i = 0; i < N; ++i)
		{
			horde[i].announce();
		}
		delete[] horde;
	}
	horde = zombieHorde(0, "Invalid");
	if (!horde)
	{
		std::cout << "No zombies created because N is zero or negative." << std::endl;
	}
	return (0);
}
