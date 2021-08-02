/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 18:07:54 by kaye              #+#    #+#             */
/*   Updated: 2021/08/02 15:46:47 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("Unknow"),
	_hit_p(100),
	_energy_p(50),
	_attack_d(20) {
	std::cout << "\e[1;35mClapTrap\e[0m default constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hit_p(100),
	_energy_p(50),
	_attack_d(20) {
	std::cout << "\e[1;35mClapTrap\e[0m named parameter constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) {
	std::cout << "\e[1;35mClapTrap\e[0m assignment constructor" << std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "\e[1;35mClapTrap\e[0m destructor" << std::endl;
	return ;
}

void	ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap [\e[1;32m" << this->_name \
		<< "\e[0m] attacks [\e[1;31m" << target \
		<< "\e[0m], causing [\e[1;33m" << this->_attack_d \
		<< "\e[0m] points of damage!" << std::endl;
	this->_old_attck_d = this->_attack_d;
	this->_attack_d += this->_hit_p;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	unsigned int tmp = amount;

	std::cout << "ClapTrap [\e[1;32m" << this->_name \
		<< "\e[0m] has [\e[1;33m" << this->_energy_p << "\e[0m] energy points. And he received a [\e[1;33m" \
		<< amount << "\e[0m] points of damage! ";
	
	if (amount > INT32_MAX)
		amount = INT32_MAX;
	if ((this->_energy_p -= amount) <= 0)
		std::cout << "ClapTrap [\e[1;32m" << this->_name << "\e[0m] Die!" << std::endl;
	else
		std::cout << "ClapTrap [\e[1;32m" << this->_name << "\e[0m] loss of [\e[1;33m" << tmp \
		<< "\e[0m] energy points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->_energy_p += amount;
	std::cout << "ClapTrap [\e[1;32m" << this->_name \
		<< "\e[0m] Repairing ... He get [\e[1;33m" 
		<< amount << "\e[0m] energy points!" << std::endl;
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