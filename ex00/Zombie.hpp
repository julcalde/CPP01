/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:47:18 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 16:07:10 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

/*
	* Zombie class definition
	* This class represents a Zombie with a name and the ability to announce itself.
	* It includes a constructor, destructor, and methods for announcing the zombie.
 */
class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		~Zombie();

		void	announce(void) const;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
