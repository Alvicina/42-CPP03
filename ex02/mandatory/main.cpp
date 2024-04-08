/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:31:47 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/03 12:22:08 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"


int	main(void)
{
	ClapTrap	Alejandro("Alejandro");
	ClapTrap	Jose("Jose");
	ScavTrap	Mauro("Mauro");
	FragTrap	Jesus("Jesus");

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
	Jesus.attack("Mauro");
	Mauro.takeDamage(Jesus.getDamage());
	std::cout << "ScavTrap " << Mauro.getName() << " hit points: ";
	std::cout << Mauro.getHitPoints() << std::endl;
	Mauro.attack("Jesus");
	Jesus.takeDamage(Mauro.getDamage());
	std::cout << "ScavTrap " << Jesus.getName() << " hit points: ";
	std::cout << Jesus.getHitPoints() << std::endl;
	Jesus.highFivesGuys();
	return (0);
}