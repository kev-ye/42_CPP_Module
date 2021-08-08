/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:18:02 by kaye              #+#    #+#             */
/*   Updated: 2021/08/08 18:12:44 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Unknow") {
	for (int i = 0; i < INVENTORY; i++)
		this->_m[i] = nullptr;
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < INVENTORY; i++)
		this->_m[i] = nullptr;
}

Character::Character(Character const & src) {
	this->_name = src.getName();
	for (int i = 0; i < INVENTORY; i++)
		this->_m[i] = src._m[i]->clone();
}

Character::~Character(void) {
	for (int i = 0; i < INVENTORY; i++)
		if (this->_m[i] != nullptr)
			delete this->_m[i];
}

std::string const &	Character::getName(void) const { return this->_name; }

void				Character::equip(AMateria *m) {
	if (!m) {
		std::cout << "\e[1;31mUnknow materia!\e[0m" << std::endl;
		return ;
	}

	for (int i = 0; i < INVENTORY; i++)
		if (!this->_m[i]) {
			this->_m[i] = m;
			return ;
		}
	std::cout << "\e[1;31mInventory is full!\e[0m" << std::endl;
}

void				Character::unequip(int idx) {
	if (idx < 0 || idx >= INVENTORY)
		std::cout << "\e[1;31mWrong idx!\e[0m" << std::endl;
	if (this->_m[idx])
		this->_m[idx] = nullptr;
	else
		std::cout << "[\e[1;31m" << idx << "\e[0m] is empty!" << std::endl;
}

void				Character::use(int idx, ICharacter & target) {
	if (this->_m[idx])
		this->_m[idx]->use(target);
	else
		std::cout << "[\e[1;31m" << idx << "\e[0m] is empty!" << std::endl;
}

Character &	Character::operator=(Character const & rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		for (int i = 0; i < INVENTORY; i++) {
			if (this->_m[i] != nullptr)
				delete this->_m[i];
			this->_m[i] = rhs._m[i]->clone();
		}
	}
	return *this;
}