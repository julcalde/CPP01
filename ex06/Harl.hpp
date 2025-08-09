/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:56:59 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 22:34:46 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

/*
	This class represents a Harl, a fictional character known for her complaints.
	It includes methods to handle different levels of complaints: debug, info,
	warning, and error. Each method outputs a specific message related to the complaint level.
	It also includes a method to process a complaint based on the level provided.
*/
class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
		// Contructor and destructor are not requested for ex05,
		// but they are included for extra effect.
		Harl();
		~Harl();
		
		void	complain(std::string level);
};

#endif