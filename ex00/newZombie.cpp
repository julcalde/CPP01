/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:47:12 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 16:07:41 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// This function creates a zombie, names it, and returns it so you can use it outside
// of the function scope. 
Zombie* newZombie(std::string name)
{
	return (new Zombie(name));
}
