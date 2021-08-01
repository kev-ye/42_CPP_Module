/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:07:14 by kaye              #+#    #+#             */
/*   Updated: 2021/08/01 20:10:56 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap a;
	ClapTrap b("RX-78-1");
	ClapTrap c("PF-78-1");
	ClapTrap d("RX-91B");

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.setAttackDamage(a.getHitPoints());
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	b.setAttackDamage(b.getHitPoints());
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	std::cout << std::endl;

	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());
	c.setAttackDamage(c.getHitPoints());
	d.attack(c.getName());
	c.takeDamage(d.getAttackDamage());
	d.setAttackDamage(d.getHitPoints());
	d.beRepaired(10);
	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());
	d.attack(c.getName());
	c.takeDamage(d.getAttackDamage());

	return 0;
}