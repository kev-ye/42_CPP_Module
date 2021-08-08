/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:57:40 by kaye              #+#    #+#             */
/*   Updated: 2021/08/08 20:05:54 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void test1() {
	std::cout << "\e[1;32m- Basic test -\e[0m\n" << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl;
}

void test2() {
	std::cout << "\e[1;32m- Deep copy test -\e[0m\n" << std::endl;
	
	ICharacter		*player1 = new Character("player1");
	Character		player2 = *(Character *)player1;
	IMateriaSource	*src = new MateriaSource();
	AMateria		*tmp;

	src->learnMateria(new Cure());
	tmp = src->createMateria("cure");
	player1->equip(tmp);

	player1->use(0, *player1);

	delete player1;
	delete src;
}

int main()
{
	// test1();
	test2();

	// system("leaks interface_recap");
	return 0;
}