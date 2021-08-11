/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:53:18 by kaye              #+#    #+#             */
/*   Updated: 2021/08/11 15:48:41 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void test1(void) {
	std::cout << "\e[1;32m- Basic test -\e[0m" << std::endl;

	Bureaucrat bureaucrat1("bureaucrat1", 2);
	std::cout << "2:          ";
	std::cout << bureaucrat1 << std::endl;

	bureaucrat1.incGrade();
	std::cout << "2 -> 1:     ";
	std::cout << bureaucrat1 << std::endl;

	Bureaucrat bureaucrat2("bureaucrat2", 149);
	std::cout << "149:        ";
	std::cout << bureaucrat2 << std::endl;

	bureaucrat2.decGrade();
	std::cout << "149 -> 150: ";
	std::cout << bureaucrat2 << std::endl;

	std::cout << std::endl;
}

void test2(void) {
	std::cout << "\e[1;32m- Exception true case test -\e[0m" << std::endl;

	try {
		Bureaucrat bureaucrat1("bureaucrat1", 2);
		std::cout << "2:          ";
		std::cout << bureaucrat1 << std::endl;
		bureaucrat1.incGrade();
		std::cout << "2 -> 1:     ";
		std::cout << bureaucrat1 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bureaucrat2("bureaucrat2", 149);
		std::cout << "149:        ";
		std::cout << bureaucrat2 << std::endl;
		bureaucrat2.decGrade();
		std::cout << "149 -> 150: ";
		std::cout << bureaucrat2 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
}

void test3(void) {
	std::cout << "\e[1;32m- Exception false case test -\e[0m" << std::endl;

	try {
		Bureaucrat bureaucrat1("bureaucrat1", 1);
		bureaucrat1.incGrade();
		std::cout << bureaucrat1 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "1 -> 0:     ";
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bureaucrat2("bureaucrat2", -1);
		std::cout << bureaucrat2 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "-1:         ";
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bureaucrat3("bureaucrat3", 150);
		bureaucrat3.decGrade();
		std::cout << bureaucrat3 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "150 -> 151: ";
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat bureaucrat4("bureaucrat4", 152);
		std::cout << bureaucrat4 << std::endl;
	}
	catch (std::exception & e) {
		std::cout << "152:        ";
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
}

int main() {
	test1();
	test2();
	test3();
	return (0);
}