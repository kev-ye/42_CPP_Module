/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:40:50 by kaye              #+#    #+#             */
/*   Updated: 2021/07/22 20:26:21 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.hpp"

Book::Book (void) : _book_i(0) {

	return ;
}

Book::~Book (void) {

	for (int i = 0; i < BOOK_NBR; i++)
		this->_book[i].info_clean();
	return ;
}

void	Book::_show_search_contact_line(int info, int index) const {
	
	std::cout << '|';
	if (this->_book[index].info[info].length() > 9)
		std::cout << this->_book[index].info[info].substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << this->_book[index].info[info];
}

void	Book::_print_search_contact(int index) const {
	
	const char *info_name[] = {"First name : ", "Last name : ", "Nickname : ", "Phone number : ", "darkest secret : "};

	for (int i = 0; i < INFO_NBR; i++) {
		std::cout << info_name[i];
		std::cout << this->_book[index].info[i] << std::endl;
	}
	std::cout << std::endl;
}

void	Book::add_contact(void) {

	this->_book[this->_book_i].info_clean();

	std::cout << "Enter the first name : ";
	std::getline (std::cin, this->_book[this->_book_i].info[Contact::e_FIRST_NAME]);

	std::cout << "Enter the last name : ";
	std::getline (std::cin, this->_book[this->_book_i].info[Contact::e_LAST_NAME]);

	std::cout << "Enter the nickname : ";
	std::getline (std::cin, this->_book[this->_book_i].info[Contact::e_NICKNAME]);

	std::cout << "Enter the phone number : ";
	std::getline (std::cin, this->_book[this->_book_i].info[Contact::e_PHONE_NBR]);

	std::cout << "Enter the darkest secret : ";
	std::getline (std::cin, this->_book[this->_book_i].info[Contact::e_DARKEST_SECRET]);

	std::cout << std::endl;

	++this->_book_i;
}

void	Book::search_contact(void) {

	std::string	tmp;
	long		index = -1;

	if (this->_book_i == 0) {
	
		std::cout << ANSI_RED "Book is empty !\n" ANSI_NONE << std::endl;
		return ;
	}

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < this->_book_i; i++) {

		std::cout << '|';
		std::cout << std::setw(10) << i + 1;
		this->_show_search_contact_line(Contact::e_FIRST_NAME, i);
		this->_show_search_contact_line(Contact::e_LAST_NAME, i);
		this->_show_search_contact_line(Contact::e_NICKNAME, i);
		std::cout << '|' << std::endl;
	}

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "\n" << std::endl;

	do {
		tmp.clear();

		std::cout << "To find : ";
		std::getline(std::cin, tmp);
		if (std::cin.eof()) {
			
			std::cout << std::endl;
			std::cout << ANSI_RED "Exit !" ANSI_NONE << std::endl;
			exit(0);
		}
	
		try {
			index = std::stol(tmp, nullptr, 10);
		}
		catch (const std::invalid_argument&) {
			std::cout << ANSI_RED"Wrong index !" ANSI_NONE << std::endl;
			continue ;
		}
	
		if (index < 1 || index > BOOK_NBR) {
		
			std::cout << ANSI_RED"Wrong index !\n" ANSI_NONE << std::endl;
			continue ;
		}
		--index;
		if (this->_book[index].info_is_empty() == true) {
			std::cout << ANSI_RED"Contact : " << index << " is empty !\n" ANSI_NONE << std::endl;
			break ;
		}
		_print_search_contact(index);
		break ;
	} while (true);
}

void	Book::menu(void) const {
	
	std::string tmp;

	std::cout << "- Choose cmd : -" << std::endl;
	std::cout << "- " ANSI_GREEN"ADD" ANSI_NONE << std::endl;
	std::cout << "- " ANSI_GREEN"SEARCH" ANSI_NONE << std::endl;
	std::cout << "- " ANSI_GREEN"EXIT" ANSI_NONE << std::endl;
	std::cout << std::endl;
}
