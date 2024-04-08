/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:57:33 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/03 13:23:49 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energy = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	_name = name;
	_hitPoints = 100;
	_energy = 50;
	_attackDamage = 20;
	std::cout << "*****ScavTrap***** " << _name << " *****created*****";
	std::cout << " with stats: " << std::endl;
	std::cout << "Hit points: " << _hitPoints << std::endl;
	std::cout << "Energy: " << _energy << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl;
	std::cout << std::endl;
} 

ScavTrap::~ScavTrap()
{
	std::cout << "*****ScavTrap***** " << _name << " *****destroyed*****" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& a) : ClapTrap(a._name)
{
	*this = a;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& a)
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

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0 || _energy <= 0)
	{
		if (_hitPoints <= 0)
		{
			std::cout << "ScavTrap " << _name << " is dead.";
			std::cout<< " Cannot attack" << std::endl;
		}
		if (_energy <= 0)
		{
			std::cout << "ScavTrap " << _name << " has no energy left.";
			std::cout<< " Cannot attack" << std::endl;
		}
		return ;
	}
	_energy = _energy - 1;
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << " using 1 energy point and";
	std::cout << " causing " << _attackDamage << " points of damage!";
	std::cout << std::endl;
	std::cout << "ScavTrap " << _name << " energy left: ";
	std::cout << _energy << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now on Gate Keeper mode";
	std::cout << std::endl;
}
