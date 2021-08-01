/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:07:29 by kaye              #+#    #+#             */
/*   Updated: 2021/08/01 20:00:41 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const & rhs);

	public:
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		std::string	getName(void);
		int			getHitPoints(void);
		int			getAttackDamage(void);
		void		setAttackDamage(int const & hit_p);

	private:
		std::string	_name;
		int			_hit_p;
		int			_energy_p;
		int			_attack_d;
};

#endif
