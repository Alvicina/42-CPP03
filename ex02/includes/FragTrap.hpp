/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:20:30 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/03 11:29:10 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	private:
	
	public:
		FragTrap(std::string name);
		~FragTrap();
		FragTrap(const FragTrap& a);
		FragTrap& operator=(const FragTrap& a);
		void	attack(const std::string& target);
		void	highFivesGuys(void);
};

#endif