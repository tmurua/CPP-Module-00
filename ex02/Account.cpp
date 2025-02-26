/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 23:01:38 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/26 21:35:33 by tmurua           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream> // std::cout for log messages
#include <ctime> //

// define static member variables
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

// define constructor member function to initialize account
Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	// log the creation of the account
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created\n";
}
// define destructor to close account
Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed\n";
}


int	Account::getNbAccounts()
{
	return _nbAccounts; // return total number of accounts
}

int	Account::getTotalAmount()
{
	return _totalAmount; // return total amount across all accounts
}

int Account::getNbDeposits()
{
	return _totalNbDeposits; // total nbr of deposits made in all accounts
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals; // total nbr of withdrwls made in all acnts
}

// display overall account information.
void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << "\n";
}

// process a deposit into specific account
void Account::makeDeposit(int deposit)
{
	int	_previousAmount;

	_previousAmount = _amount;
	_amount = _amount + deposit;
	_nbDeposits = 1;
	_totalNbDeposits++;
	_totalAmount = _totalAmount + deposit;
	_displayTimestamp();
	std::cout << " index:" <<  _accountIndex << ";";
	std::cout << "p_amount:" << _previousAmount <<";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << "\n";
}

// process a withdrawal from specific account
// returns true if withdrawal was successful; false if insufficient funds
bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal <= _amount)
	{
		_amount = _amount - withdrawal;
		_nbWithdrawals = 1;
		_totalNbWithdrawals++;
		_totalAmount = _totalAmount - withdrawal;
		std::cout << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << "\n";
		return true;
	}
	else
	{
		std::cout << "refused\n";
		return false;
	}
}

// return current amount in account
int Account::checkAmount() const
{
	return _amount;
}

// display status of this account
void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << "\n";
}

// display current timestamp in required format
void Account::_displayTimestamp()
{
	std::time_t now = std::time(NULL); // 1. get current time
	struct tm* localTime = std::localtime(&now); // 2. convert current time to local time
	char timestamp[20]; // 3. create c-string to hold formatted timestamp
	std::strftime(timestamp, 20, "[%Y%m%d_%H%M%S]", localTime); // 4. format time into string
	std::cout << timestamp;
}
