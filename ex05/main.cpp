/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julcalde <julcalde@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 21:56:56 by julcalde          #+#    #+#             */
/*   Updated: 2025/08/09 22:33:24 by julcalde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Main function to test different levels and invalid inputs
int main(void)
{
	Harl	harl;
	
	harl.complain("DEBUG"); // This should trigger debug output
	harl.complain("INFO"); // This should trigger info output
	harl.complain("WARNING"); // This should trigger warning output
	harl.complain("ERROR"); // This should trigger error output
	harl.complain("UNKNOWN"); // This should not trigger any output
	harl.complain(""); // This should not trigger any output
	harl.complain("1DEBUG"); // This should not trigger any output
	
	return (0);
}
