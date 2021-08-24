/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:02:51 by kaye              #+#    #+#             */
/*   Updated: 2021/08/24 19:34:26 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

void test1(void) {
	std::cout << "\e[1;32m- Baisc test -\e[0m" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size: " << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	std::cout << "MutantStack:";
	while (it != ite) {
		std::cout << ' ' << *it;
		++it;
	}
	std::cout << std::endl;

	std::stack<int> s(mstack);

	std::cout << "Stack(assign):";
	while (!s.empty()) {
		std::cout << ' ' << s.top();
		s.pop();
	}
	std::cout << std::endl;

	std::cout << std::endl;
}

void test2(void) {
	std::cout << "\e[1;32m- stack + iterator full test -\e[0m" << std::endl;

	/* constructor */
	MutantStack<int> mutantstack;

	/* empty */
	if (mutantstack.empty() == true)
		std::cout << "mutantstack is empty" << std::endl;

	/* size */
	std::cout << "mutantstack size: " << mutantstack.size() << std::endl;

	/* push */
	mutantstack.push(1);

	/* top */
	std::cout << "mutantstack top: " << mutantstack.top() << std::endl;

	/* pop */
	mutantstack.pop();

	mutantstack.push(1);
	mutantstack.push(2);
	mutantstack.push(3);

	/* iterator begin + end */
	MutantStack<int>::iterator it = mutantstack.begin();
	std::cout << "iterator begin + end:";
	for (; it != mutantstack.end(); it++)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	/* iterator rbegin + rend */
	MutantStack<int>::reverse_iterator rit = mutantstack.rbegin();
	std::cout << "iterator rbegin + rend:";
	for (; rit != mutantstack.rend(); rit++)
		std::cout << ' ' << *rit;
	std::cout << std::endl;
}

int main()
{
	test1();
	test2();
	return 0;
}