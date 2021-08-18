/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:42:39 by kaye              #+#    #+#             */
/*   Updated: 2021/08/18 19:04:25 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"
#include <iomanip>

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "usage: ./convert [\e[1;31mARGS\e[0m]" << std::endl;
		return (1);
	}

	// std::string a = "42.12312312f";
	// char *ptr = NULL;
	// char *ptr2 = NULL;
	// char *ptr3 = NULL;

	// long l = strtol(a.c_str(), &ptr, 10);
	// float f = strtof(a.c_str(), &ptr2);
	// double d = strtod(a.c_str(), &ptr3);
	// std::cout << "l: " << l << std::endl;
	// std::cout << "f: " << std::setiosflags(std::ios::fixed) << std::setprecision(1) << f << std::endl;
	// std::cout << "d: " << d << std::endl;
	// std::cout << "str: " << a.c_str() << std::endl;
	// std::cout << "ptr: " << ptr << std::endl;
	// std::cout << "ptr2: " << ptr2 << std::endl;
	// std::cout << "ptr3: " << ptr3 << std::endl;
	// if (a.c_str() == ptr)
	// 	std::cout << "ptr some err\n";
	// if (a.c_str() == ptr2)
	// 	std::cout << "ptr2 some err\n";
	// if (a.c_str() == ptr3)
	// 	std::cout << "ptr3 some err\n";

	Convert convert(av[1]);

	convert.display();

	return (0);
}