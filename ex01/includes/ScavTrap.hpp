/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:56:45 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/02 15:45:07 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	private:
	
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& a);
		ScavTrap& operator=(const ScavTrap& a);
		~ScavTrap();
		void			attack(const std::string& target);
		void			guardGate();
};

#endif