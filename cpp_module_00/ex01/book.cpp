/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 16:40:50 by kaye              #+#    #+#             */
/*   Updated: 2021/07/23 14:46:18 by kaye             ###   ########.fr       */
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

void	Book::exit(void) const {

	std::cout << ANSI_RED "Exit !" ANSI_NONE << std::endl;
	std::exit(EXIT_SUCCESS);
}

void	Book::_input_value(std::string &value) const {

	std::getline (std::cin, value);
	if (std::cin.eof() == true)
		this->exit();
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

	std::cout << std::setw(4) << "" << "-> Enter the first name : ";
	this->_input_value(this->_book[this->_book_i].info[Contact::e_FIRST_NAME]);

	std::cout << std::setw(4) << "" << "-> Enter the last name : ";
	this->_input_value(this->_book[this->_book_i].info[Contact::e_LAST_NAME]);

	std::cout << std::setw(4) << "" << "-> Enter the nickname : ";
	this->_input_value(this->_book[this->_book_i].info[Contact::e_NICKNAME]);

	std::cout << std::setw(4) << "" << "-> Enter the phone number : ";
	this->_input_value(this->_book[this->_book_i].info[Contact::e_PHONE_NBR]);

	std::cout << std::setw(4) << "" << "-> Enter the darkest secret : ";
	this->_input_value(this->_book[this->_book_i].info[Contact::e_DARKEST_SECRET]);

	std::cout << std::endl;

	if (this->_book[this->_book_i].info_is_empty() == false)
		++this->_book_i;
	if (this->_book_i >= BOOK_NBR) {
	
		this->_book_i = 0;
		std::cout << ANSI_RED"Book is full !\n" ANSI_NONE;
		std::cout << ANSI_RED"Next cmd ADD will overwrite (index -> 0) !" ANSI_NONE << std::endl;
	}
}

void	Book::search_contact(void) const {

	std::string	tmp;
	long		index = -1;

	for (int i = 0; i < BOOK_NBR; i++) {
		
		if (this->_book[i].info_is_empty() == true) {
			
			if (i == BOOK_NBR - 1) {

				std::cout << ANSI_RED "Book is empty !\n" ANSI_NONE << std::endl;
				return ;
			}
			continue ;
		}
		else
			break ;
	}

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < BOOK_NBR; i++) {

		if (this->_book[i].info_is_empty() == true)
			continue ;
	
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
		this->_input_value(tmp);
	
		try {
	
			index = std::stol(tmp, nullptr, 10);
		}
		catch (const std::exception) {
	
			std::cout << ANSI_RED"Invalid index !\n" ANSI_NONE << std::endl;
			continue ;
		}
	
		if (index < 1 || index > BOOK_NBR) {
		
			std::cout << ANSI_RED"Wrong index !\n" ANSI_NONE << std::endl;
			continue ;
		}
		--index;
		if (this->_book[index].info_is_empty() == true) {

			std::cout << ANSI_RED"Contact : " << index + 1 << " is empty !\n" ANSI_NONE << std::endl;
			break ;
		}
		_print_search_contact(index);
		break ;
	} while (true);
}

void	Book::menu(void) const {
	
	std::string tmp;

	std::cout << "- Choose cmd -" << std::endl;
	std::cout << "[" ANSI_GREEN"ADD" ANSI_NONE "], ";
	std::cout << "[" ANSI_GREEN"SEARCH" ANSI_NONE"], ";
	std::cout << "[" ANSI_GREEN"EXIT" ANSI_NONE"]" << std::endl;
	std::cout << std::endl;
}
