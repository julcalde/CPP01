/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:10:24 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 19:38:38 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		horde[i].setName(name);
	}
	return (horde);
}
