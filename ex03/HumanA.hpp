/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 20:04:08 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 20:05:51 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{
	private:
		std::string name;
		Weapon& weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		void attack() const;
};

#endif