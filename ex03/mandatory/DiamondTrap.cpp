/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 12:34:52 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/08 12:59:03 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_name = "<namelessdiamond";
	_hitPoints = FragTrap::_hitPoints;
	_energy = ScavTrap::_energy;
	_attackDamage = FragTrap::_fattackDamage;
	std::cout << "a///// " << _name << " ///// has landed" << std::endl;

}

DiamondTrap::~DiamondTrap()
{
	std::cout << "/////DiamondTrap///// " << _name << " /////has escaped/////";
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energy = ScavTrap::_energy;
	_attackDamage = FragTrap::_fattackDamage;
	std::cout << "DiamondTrap " << _name << " ///// has landed with stats:" << std::endl;
	std::cout << "Hit points: " << _hitPoints << std::endl;
	std::cout << "Energy: " << _energy << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl;
	std::cout << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& a)
{
	*this = a;
	std::cout << "DiamondTrap " << _name << " ///// has landed" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& a)
{
	if (this != &a)
	{
		_name = a._name;
		_hitPoints = a._hitPoints;
		_energy = a._energy;
		_attackDamage = a._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My ClapTrap name is " << ClapTrap::_name << ". My DiamondTrap name is ";
	std::cout << _name << std::endl;
}






