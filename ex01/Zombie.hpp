/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:10:22 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 19:36:37 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string name;

	public:
		Zombie(std::string name = "");
		~Zombie();
		void announce(void) const;
		void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif