/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:29:39 by kaye              #+#    #+#             */
/*   Updated: 2021/08/05 18:57:00 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CPP
# define DIAMONDTRAP_CPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & src);
		virtual ~DiamondTrap(void);
		
		DiamondTrap & operator=(DiamondTrap const & rhs);

	public:
		void	attack(std::string const & target);
		void	whoAmI(void);

	private:
		std::string _name;
};

#endif