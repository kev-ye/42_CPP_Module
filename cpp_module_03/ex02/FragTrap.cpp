/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:30:13 by kaye              #+#    #+#             */
/*   Updated: 2021/08/04 17:10:26 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Unknow") {
	std::cout << "\e[1;36mFragTrap\e[0m default constructor" << std::endl;
	this->_hit_p = 100;
	this->_energy_p = 100;
	this->_attack_d = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "\e[1;36mFragTrap\e[0m named parameter constructor" << std::endl;
	this->_hit_p = 100;
	this->_energy_p = 100;
	this->_attack_d = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) {
	std::cout << "\e[1;36mFragTrap\e[0m assignment constructor" << std::endl;
	*this = src;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << "\e[1;36mFragTrap\e[0m destructor" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap [\e[1;32m" << this->_name \
		<< "\e[0m] : wanna high fives guys?" << std::endl;
}

FragTrap	& FragTrap::operator=(FragTrap const & rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hit_p = rhs._hit_p;
		this->_energy_p = rhs._energy_p;
		this->_attack_d = rhs._attack_d;
	}
	return *this;
}