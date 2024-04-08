/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:31:47 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/02 14:51:01 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Alejandro("Alejandro");
	ClapTrap	Jose("Jose");

	Alejandro.attack("Jose");
	Jose.takeDamage(Alejandro.getDamage());
	Jose.attack("Alejandro");
	Alejandro.takeDamage(Jose.getDamage());
	Jose.beRepaired(Alejandro.getDamage());
	Alejandro.beRepaired(Jose.getDamage());
	return (0);
}