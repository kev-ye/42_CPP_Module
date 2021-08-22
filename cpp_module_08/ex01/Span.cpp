/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 16:55:22 by kaye              #+#    #+#             */
/*   Updated: 2021/08/22 20:57:56 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {}

Span::Span(unsigned int n) : _array(n, 0), _n(n), _count(0) {}

Span::Span(Span const & src) {
	this->_n = src._n;
	this->_count = src._count;
	this->_array.resize(this->_n);
	for (unsigned int i = 0; i < this->_count; i++)
		this->setArray(this->_array[i], src._array[i]);
}

Span::~Span(void) {}

Span &	Span::operator=(Span const & rhs) {
	if (this == & rhs) return *this;

	this->_n = rhs._n;
	this->_count = rhs._count;
	this->_array.resize(this->_n);
	for (unsigned int i = 0; i < this->_count; i++)
		this->setArray(this->_array[i], rhs._array[i]);
	return *this;
}

std::vector<int> const &	Span::getArray(void) const { return this->_array; }
void		Span::setArray(int & arrayValue, int toSet) { arrayValue = toSet; }

void	Span::addNumber(int nbr) {
	if (this->_count == this->_n) throw CantAddNbrException();

	this->setArray(this->_array[this->_count], nbr);
	++this->_count;
}

int		Span::shortestSpan(void) const {
	if (this->_count <= 1) throw Span::CantGetShortestSpanException();

	std::vector<int>::const_iterator max = std::max_element(this->_array.begin(), this->_array.begin() + this->_count);
	std::vector<int>::const_iterator min = std::min_element(this->_array.begin(), this->_array.begin() + this->_count);
	int span = *max - *min;

	for (unsigned int i = 0; i < this->_count; i++) {
		if (this->_array[i] != *min && this->_array[i] - *min < span)
			span = this->_array[i] - *min;
	}
	return span;
}

int		Span::longestSpan(void) const {
	if (this->_count <= 1) throw Span::CantGetLongestSpanException();

	std::vector<int>::const_iterator max = std::max_element(this->_array.begin(), this->_array.begin() + this->_count);
	std::vector<int>::const_iterator min = std::min_element(this->_array.begin(), this->_array.begin() + this->_count);
	return *max - *min;
}

char const *Span::CantAddNbrException::what() const throw() { return "Can't add number!"; }
char const *Span::CantGetShortestSpanException::what() const throw() { return "Can't get shortest span number!"; }
char const *Span::CantGetLongestSpanException::what() const throw() { return "Can't get longest span number!"; }