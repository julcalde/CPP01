/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:06:08 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 20:11:23 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{
	private:
		std::string name;
		Weapon* weapon;

	public:
		HumanB(std::string name);
		void setWeapon(Weapon& weapon);
		void attack() const;
};

#endif