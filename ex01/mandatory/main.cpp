/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:31:47 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/02 15:59:05 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Alejandro("Alejandro");
	ClapTrap	Jose("Jose");
	ScavTrap	Mauro("Mauro");

	Alejandro.attack("Jose");
	Jose.takeDamage(Alejandro.getDamage());
	Jose.attack("Alejandro");
	Alejandro.takeDamage(Jose.getDamage());
	Jose.beRepaired(Alejandro.getDamage());
	Alejandro.beRepaired(Jose.getDamage());
	Mauro.attack("Jose");
	Jose.takeDamage(Mauro.getDamage());
	Jose.beRepaired(Mauro.getDamage());
	Mauro.guardGate();
	Mauro.beRepaired(Mauro.getDamage());
	std::cout << "ScavTrap " << Mauro.getName() << " hit points: ";
	std::cout << Mauro.getHitPoints() << std::endl;
	return (0);
}