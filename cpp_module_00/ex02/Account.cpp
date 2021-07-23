/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 15:43:00 by kaye              #+#    #+#             */
/*   Updated: 2021/07/23 16:27:16 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit) {
	
	initial_deposit = 0;
	return ;
}

Account::~Account(void) {
		
	return ;
}

int 	Account::getNbAccounts(void) {
	
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount(void) {
	
	return (Account::_totalAmount);
}

int		Account::getNbDeposits(void) {
	
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals(void) {
	
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	
}

void	Account::makeDeposit(int deposit) {
	
}

bool	Account::makeWithdrawal(int withdrawal) {
	
	return (true);
}

int		Account::checkAmount(void) const {
	
	return (0);
}

void	Account::displayStatus(void) const {
	
}

void		_displayTimetamp(void) {
	
	
}