/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 17:53:18 by kaye              #+#    #+#             */
/*   Updated: 2021/08/10 15:36:54 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat bureaucrat("bureaucrat", 1);
	bureaucrat.incGrade();

	std::cout << bureaucrat << std::endl;
	return (0);
}