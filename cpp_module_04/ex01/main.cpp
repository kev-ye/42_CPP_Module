/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 12:57:40 by kaye              #+#    #+#             */
/*   Updated: 2021/08/06 19:12:17 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMAL_TAB_SIZE 4

int main() {
	Animal *animal[ANIMAL_TAB_SIZE];

	std::cout << "\e[1;32m- animal (dog/cat) Creating ... -\e[0m\n" << std::endl;
	for (int i = 0; i < ANIMAL_TAB_SIZE; i++) {
		if (i % 2 == 0)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}
	std::cout << std::endl;

	std::cout << "\e[1;32m- animal (dog/cat) Make sound ... -\e[0m\n" << std::endl;
	for (int i = 0; i < ANIMAL_TAB_SIZE; i++) {
		if (i % 2 == 0) {
			std::cout << "Cat: ";
			animal[i]->makeSound();
		}
		else {
			std::cout << "Dog: ";
			animal[i]->makeSound();
		}
	}
	std::cout << std::endl;

	std::cout << "\e[1;32m- deep copy ... -\e[0m\n" << std::endl;
	Animal *copy = new Cat(*(Cat *)animal[0]);
	std::cout << "Copy: ";
	for (int i = 0; i < NBR_IDEAS; i++)
		std::cout << ((Cat *)copy)->getBrain()->getIdea(i);
	std::cout << std::endl;
	std::cout << "Cat:  ";
	for (int i = 0; i < NBR_IDEAS; i++)
		std::cout << ((Cat *)animal[0])->getBrain()->getIdea(i);
	std::cout << std::endl;
	std::cout << "reset: ";
	for (int i = 0; i < NBR_IDEAS; i++) {
		((Cat *)copy)->getBrain()->setIdea(i, ":)");
		std::cout << ((Cat *)copy)->getBrain()->getIdea(i);
	}
	std::cout << std::endl;
	std::cout << "Cat:   ";
	for (int i = 0; i < NBR_IDEAS; i++)
		std::cout << ((Cat *)animal[0])->getBrain()->getIdea(i);
	std::cout << "\n" << std::endl;

	std::cout << "\e[1;32m- animal (dog/cat) deleting ... -\e[0m\n" << std::endl;
	for (int i = 0; i < ANIMAL_TAB_SIZE; i++) {
		delete animal[i];
	}
	std::cout << std::endl;

	std::cout << "\e[1;32m- copy deleting ... -\e[0m\n" << std::endl;
	delete copy;
	std::cout << std::endl;

	std::cout << "\e[1;32m- if leaks ... -\e[0m\n" << std::endl;
	system("leaks brain");
	return (0);
}