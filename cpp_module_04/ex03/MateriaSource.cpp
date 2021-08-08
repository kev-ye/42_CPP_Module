/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:53:46 by kaye              #+#    #+#             */
/*   Updated: 2021/08/08 18:10:47 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < INVENTORY; i++)
		this->_materia[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const & src) {
	for (int i = 0; i < INVENTORY; i++)
		this->_materia[i] = src._materia[i]->clone();
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < INVENTORY; i++)
		if (this->_materia[i] != nullptr)
			delete this->_materia[i];
}

void		MateriaSource::learnMateria(AMateria * materia) {
	for (int i = 0; i < INVENTORY; i++)
		if (!this->_materia[i]) {
			this->_materia[i] = materia;
			break;
		}
}

AMateria	*MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < INVENTORY; i++) {
		if (this->_materia[i] != nullptr && this->_materia[i]->getType() == type) {
			return this->_materia[i]->clone();
		}
	}
	return nullptr;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs) {
	if (this != &rhs) {
		for (int i = 0; i < INVENTORY; i++) {
			if (this->_materia[i] != nullptr)
				delete this->_materia[i];
			this->_materia[i] = rhs._materia[i]->clone();
		}
	}
	return *this;
}