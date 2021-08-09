/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 15:18:02 by kaye              #+#    #+#             */
/*   Updated: 2021/08/09 17:23:17 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Unknow") {
	for (int i = 0; i < INVENTORY; i++) {
		this->_m[i] = nullptr;
		this->_bag[i] = nullptr;
	}
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < INVENTORY; i++) {
		this->_m[i] = nullptr;
		this->_bag[i] = nullptr;
	}
}

Character::Character(Character const & src) {
	this->_name = src.getName();
	for (int i = 0; i < INVENTORY; i++) {
		if (src._m[i])
			this->_m[i] = src._m[i]->clone();
		else {
			this->_m[i] = src._m[i];
			this->_bag[i] = this->_m[i];
		}
	}
}

Character::~Character(void) {
	for (int i = 0; i < INVENTORY; i++) {
		if (this->_m[i])
			delete this->_m[i];
		if (this->_bag[i])
			delete this->_bag[i];
		this->_m[i] = nullptr;
		this->_bag[i] = nullptr;
	}
}

std::string const &	Character::getName(void) const { return this->_name; }

void				Character::equip(AMateria *m) {
	if (!m) {
		std::cout << "\e[1;31m[Error]\e[0m Can't equip, Materia no exist!" << std::endl;
		return ;
	}

	for (int i = 0; i < INVENTORY; i++)
		if (!this->_m[i]) {
			std::cout << "\e[1;36m[Equipping]\e[0m " << m->getType() << " ..." << std::endl;
			this->_m[i] = m;
			this->_bag[i] = nullptr;
			return ;
		}
	// delete m; // subj ask we don't do thing ... but if not delete it, we get a leak ...
	std::cout << "\e[1;31m[Error]\e[0m Can't equip [" << m->getType() <<"], inventory is full!" << std::endl;
}

void				Character::unequip(int idx) {
	if (idx < 0 || idx >= INVENTORY)
		std::cout << "e[1;31m[Error]\e[0m Wrong idx!" << std::endl;

	if (this->_m[idx]) {
		std::cout << "\e[1;36m[Unequipping]\e[0m " << this->_m[idx]->getType() << "..." << std::endl;
		this->_bag[idx] = this->_m[idx];
		this->_m[idx] = nullptr;
	}
	else
		std::cout << "\e[1;31m[Error]\e[0m inventory [" << idx << "] is empty!" << std::endl;
}

void				Character::use(int idx, ICharacter & target) {
	if (idx < 0 || idx >= INVENTORY)
		std::cout << "\e[1;31m[Error]\e[0m Wrong idx!" << std::endl;

	if (this->_m[idx])
		this->_m[idx]->use(target);
	else
		std::cout << "\e[1;31m[Error]\e[0m inventory [" << idx << "] is empty!" << std::endl;
}

AMateria			*Character::getInventoryMateria(int idx) const {
	if (idx < 0 || idx >= INVENTORY)
		std::cout << "e[1;31m[Error]\e[0m Wrong idx!" << std::endl;
	
	if (this->_bag[idx])
		return this->_bag[idx];
	else {
		std::cout << "\e[1;31m[Error]\e[0m bag [" << idx << "] is empty!" << std::endl;
		return nullptr;
	}
}

Character &	Character::operator=(Character const & rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		for (int i = 0; i < INVENTORY; i++) {
			if (this->_m[i])
				delete this->_m[i];
			if (rhs._m[i])
				this->_m[i] = rhs._m[i]->clone();
			else {
				this->_m[i] = rhs._m[i];
				this->_bag[i] = this->_m[i];
			}
		}
	}
	return *this;
}