/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:34:03 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/03 13:32:52 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	_name = name;
	_hitPoints = 100;
	_energy = 100;
	_attackDamage = 30;
	std::cout << "======FragTrap====== " << _name << " ======has apeared======";
	std::cout << " with stats: " << std::endl;
	std::cout << "Hit points: " << _hitPoints << std::endl;
	std::cout << "Energy: " << _energy << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl;
	std::cout << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "======FragTrap====== " << _name << " ======has vanished======";
	std::cout << std::endl;
}

FragTrap::FragTrap(const FragTrap& a) : ClapTrap(a._name)
{
	*this = a;
}

FragTrap& FragTrap::operator=(const FragTrap& a)
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

void	FragTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0 || _energy <= 0)
	{
		if (_hitPoints <= 0)
		{
			std::cout << "FragTrap " << _name << " is dead.";
			std::cout<< " Cannot attack" << std::endl;
		}
		if (_energy <= 0)
		{
			std::cout << "FragTrap " << _name << " has no energy left.";
			std::cout<< " Cannot attack" << std::endl;
		}
		return ;
	}
	_energy = _energy - 1;
	std::cout << "FragTrap " << _name << " attacks " << target;
	std::cout << " using 1 energy point and";
	std::cout << " causing " << _attackDamage << " points of damage!";
	std::cout << std::endl;
	std::cout << "FragTrap " << _name << " energy left: ";
	std::cout << _energy << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " WHO WANTS A HIGH FIVE??? WHO, WHO!!!";
	std::cout << std::endl;
}




