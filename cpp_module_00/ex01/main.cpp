/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 17:57:07 by kaye              #+#    #+#             */
/*   Updated: 2021/07/22 19:01:05 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.hpp"
#include "contact.hpp"

int main(void) {

	Book		book;
	std::string	cmd;

	do {

		book.menu();

		std::getline(std::cin, cmd);
		if (std::cin.eof() || cmd == "EXIT") {
			std::cout << ANSI_RED "Exit !" ANSI_NONE << std::endl;
			break ;
		}

		else if (cmd == "ADD")
			book.add_contact();
		
		else if (cmd == "SEARCH")
			book.search_contact();

	} while (true);

	return (0);
}