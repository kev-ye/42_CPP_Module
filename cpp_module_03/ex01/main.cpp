/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:07:14 by kaye              #+#    #+#             */
/*   Updated: 2021/08/02 19:00:43 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap a;
	ScavTrap b("RX-78-1");
	ScavTrap c("PF-78-1");
	ScavTrap d("RX-91B");

	std::cout << "Example 1 :" << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	std::cout << std::endl;

	std::cout << "Example 2 :" << std::endl;
	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());
	d.attack(c.getName());
	c.takeDamage(d.getAttackDamage());
	c.beRepaired(20);
	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());
	d.attack(c.getName());
	c.takeDamage(d.getAttackDamage());
	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());
	d.attack(c.getName());
	c.takeDamage(d.getAttackDamage());
	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());
	d.attack(c.getName());
	c.takeDamage(d.getAttackDamage());
	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());
	d.attack(c.getName());
	c.takeDamage(d.getAttackDamage());
	c.attack(d.getName());
	d.attack(c.getName());
	c.takeDamage(c.getAttackDamage());
	return 0;
}