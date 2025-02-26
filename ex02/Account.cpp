/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurua <tmurua@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 23:01:38 by tmurua            #+#    #+#             */
/*   Updated: 2025/02/26 18:50:19 by tmurua           ###   ########.fr       */
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
	// TODO: initialize account with initial_deposit,
	// update _amount, _nbAccounts, _totalAmount, etc
	_amount = initial_deposit;
	_accountIndex = _nbAccounts; // for example
	_nbAccounts++;
	_totalAmount += initial_deposit;
	// log the creation of the account
	displayStatus();
}
// define destructor to close account
Account::~Account()
{
	// TODO: log the closure of the account
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

// process a deposit into this account
// the parameter 'deposit' represents the amount to deposit
void Account::makeDeposit(int deposit)
{
	// TODO: Before updating, store the previous amount (_amount) in a temporary variable
	// TODO: Call _displayTimestamp() to print the current timestamp
	// TODO: Print a log message with details: previous amount, deposit, new amount, and the number of deposits
	// TODO: Add the deposit to _amount
	// TODO: Increment _nbDeposits for this account and update the global totals (_totalAmount and _totalNbDeposits)
	// the current code is just a placeholder
	deposit++; // placeholder; replace with proper deposit logic
}

// process a withdrawal from this account
// returns true if withdrawal was successful; false if insufficient funds
bool Account::makeWithdrawal(int withdrawal)
{
	// TODO: Check if _amount is sufficient for the withdrawal
	// If not, print a log message indicating that the withdrawal was refused and return false.
	// If sufficient, subtract the withdrawal from _amount
	// TODO: Increment _nbWithdrawals for this account and update the global totals (_totalAmount and _totalNbWithdrawals)
	// TODO: Print a log message with details: previous amount, withdrawal, new amount, and the number of withdrawals
	// current condition is just a placeholder
	if (withdrawal++) // placeholder; replace with proper withdrawal logic
	{
		return true;
	}
	else
		return false;
}

// return current amount in account
int Account::checkAmount() const
{
	return _amount;
}

// display status of this account
void Account::displayStatus() const
{
	// TODO:
	// format output to match the expected log format:
	// "[timestamp] index:0;amount:42;deposits:0;withdrawals:0"
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
