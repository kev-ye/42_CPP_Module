/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:07:14 by kaye              #+#    #+#             */
/*   Updated: 2021/08/02 18:38:10 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap a;
	ClapTrap b("RX-78-1");
	ClapTrap c("PF-78-1");
	ClapTrap d("RX-91B");

	std::cout << "Example 1 :" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	a.attack(b.getName());

	std::cout << std::endl;

	std::cout << "Example 2 :" << std::endl;
	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());
	d.attack(c.getName());
	c.takeDamage(d.getAttackDamage());
	d.beRepaired(10);
	c.attack(d.getName());
	d.attack(c.getName());
	c.takeDamage(d.getAttackDamage());
	return 0;
}