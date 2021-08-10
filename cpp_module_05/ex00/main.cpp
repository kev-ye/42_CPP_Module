/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:53:18 by kaye              #+#    #+#             */
/*   Updated: 2021/08/10 18:14:51 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	// Bureaucrat bureaucrat("bureaucrat", 1);
	// bureaucrat.incGrade();
	try {
		Bureaucrat bureaucrat("bureaucrat", 0);
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
		return 0;
	}

	return (0);
}