/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:55:10 by kaye              #+#    #+#             */
/*   Updated: 2021/08/22 20:57:16 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	print(int i) {
	std::cout << ' ' << i;
}

int main() {
	Span sp = Span(6);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(18);
	sp.addNumber(9);
	sp.addNumber(11);

	std::for_each(sp.getArray().begin(), sp.getArray().end(), print);
	std::cout << std::endl;

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
