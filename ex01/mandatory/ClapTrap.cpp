/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:09:25 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/03 11:13:51 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energy(10), 
_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been borned whith the";
	std::cout << " following stats: " << std::endl;
	std::cout << "Hit points: " << _hitPoints << std::endl;
	std::cout << "Energy: " << _energy << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl;
	std::cout << std::endl;
}

ClapTrap::ClapTrap()
{
	std::cout << "Basic ClapTrap created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "  << _name << " has been deleted" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& a)
{
	std::cout << "Copy constructor of ClapTrap called" << std::endl;
	*this = a;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& a)
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

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0 || _energy <= 0)
	{
		if (_hitPoints <= 0)
		{
			std::cout << "ClapTrap " << _name << " is dead.";
			std::cout<< " Cannot attack" << std::endl;
		}
		if (_energy <= 0)
		{
			std::cout << "ClapTrap " << _name << " has no energy left.";
			std::cout<< " Cannot attack" << std::endl;
		}
		return ;
	}
	_energy = _energy - 1;
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << " using 1 energy point and";
	std::cout << " causing " << _attackDamage << " points of damage!";
	std::cout << std::endl;
	std::cout << "ClapTrap " << _name << " energy left: ";
	std::cout << _energy << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0 || _energy <= 0)
		return ;
	_hitPoints = _hitPoints - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0 || _energy <= 0)
	{
		if (_hitPoints <= 0)
		{
			std::cout << "ClapTrap " << _name << " is dead.";
			std::cout<< " Cannot heal itself" << std::endl;
		}
		if (_energy <= 0)
		{
			std::cout << "ClapTrap " << _name << " has no energy left";
			std::cout<< " Cannot heal itself" << std::endl;
		}
		return ;
	}
	_hitPoints = _hitPoints + amount;
	_energy = _energy - 1;
	std::cout << "ClapTrap " << _name << " heals itself for ";
	std::cout << amount << " hit points";
	std::cout << " using 1 energy point" << std::endl;
	std::cout << "ClapTrap " << _name << " energy left: ";
	std::cout << _energy << std::endl;
}

unsigned int	ClapTrap::getDamage()
{
	return (_attackDamage);
}

std::string& ClapTrap::getName()
{
	return (_name);
}

int	ClapTrap::getHitPoints()
{
	return (_hitPoints);
}
