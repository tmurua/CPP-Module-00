/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 23:01:38 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/25 18:40:38 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{

}

void Account::makeDeposit(int deposit)
{
	deposit++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal++)
	{
		return true;
	}
	else
		return false;
}

int Account::checkAmount() const
{
	return	_amount;
}

void Account::displayStatus() const
{

}

void Account::_displayTimestamp()
{

}
