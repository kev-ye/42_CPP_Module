/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 13:02:55 by kaye              #+#    #+#             */
/*   Updated: 2021/08/05 17:52:43 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		virtual ~ScavTrap(void);
	
		ScavTrap & operator=(ScavTrap const & rhs);

	public:
		void	attack(std::string const & target);
		void	guardGate(void);

		void	setHP(void);
		void	setEP(void);
		void	setAD(void);
		
};

#endif