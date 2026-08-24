/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 07:52:46 by hchartie          #+#    #+#             */
/*   Updated: 2026/08/24 20:55:39 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
	std::string keys[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string arg;
	Harl		harl;
	int			i = 0;
	bool		check = false;

	if (ac != 2)
		return (0);
	arg = av[1];
	while (i < 4)
	{
		if (!arg.compare(keys[i]))
			break ;
		i++;
	}
	switch (i)
	{
		case 0: harl.complain("DEBUG");
			// fall through
		case 1: harl.complain("INFO");
			// fall through
		case 2: harl.complain("WARNING");
			// fall through
		case 3: harl.complain("ERROR");
			break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	if (!check)
	return (0);
}
