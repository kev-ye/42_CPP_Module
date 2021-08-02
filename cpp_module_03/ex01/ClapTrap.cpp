/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:07:54 by kaye              #+#    #+#             */
/*   Updated: 2021/08/02 13:02:25 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("Unknow"),
	_hit_p(10),
	_energy_p(10),
	_attack_d(0) {
	return ;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hit_p(10),
	_energy_p(10),
	_attack_d(0) {
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void) {
	return ;
}

void	ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap [\033[1;32m" << this->_name \
		<< "\033[0m] attacks [\033[1;31m" << target \
		<< "\033[0m], causing [\033[1;33m" << this->_attack_d \
		<< "\033[0m] points of damage!" << std::endl;
	this->_old_attck_d = this->_attack_d;
	this->_attack_d += this->_hit_p;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	unsigned int tmp = amount;

	std::cout << "ClapTrap [\033[1;32m" << this->_name \
		<< "\033[0m] has [\033[1;33m" << this->_energy_p << "\033[0m] energy points. And he received a [\033[1;33m" \
		<< amount << "\033[0m] points of damage! ";
	
	if (amount > INT32_MAX)
		amount = INT32_MAX;
	if ((this->_energy_p -= amount) <= 0)
		std::cout << "ClapTrap [\033[1;32m" << this->_name << "\033[0m] Die!" << std::endl;
	else
		std::cout << "ClapTrap [\033[1;32m" << this->_name << "\033[0m] loss of [\033[1;33m" << tmp \
		<< "\033[0m] energy points!" << std::endl;
	
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->_energy_p += amount;
	std::cout << "ClapTrap [\033[1;32m" << this->_name \
		<< "\033[0m] Repairing ... He get [\033[1;33m" 
		<< amount << "\033[0m] energy points!" << std::endl;
}

int	ClapTrap::getAttackDamage(void) {
	return this->_old_attck_d;
}

std::string		ClapTrap::getName(void) {
	return this->_name;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_hit_p = rhs._hit_p;
		this->_energy_p = rhs._energy_p;
		this->_attack_d = rhs._attack_d;
	}
	return *this;
}