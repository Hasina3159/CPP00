/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntodisoa <ntodisoa@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/29 11:29:46 by ntodisoa          #+#    #+#             */
/*   Updated: 2024/12/29 11:30:00 by ntodisoa         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <cstdio>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return _totalAmount;
}
int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}
void	Account::displayAccountsInfos( void )
{
	std::cout << "[" << std::flush;
	_displayTimestamp();
	std::cout << "] " << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount = _totalAmount + initial_deposit;
	_nbWithdrawals = 0;
	_nbAccounts = _nbAccounts + 1;
	std::cout << "[" << std::flush;
	_displayTimestamp();
	std::cout << "] " << "index:" << _accountIndex << ";amount:" << _amount << ";created" <<std::endl;
}
Account::~Account( void )
{
	std::cout << "[" << std::flush;
	_displayTimestamp();
	std::cout << "] " << "index:" << _accountIndex << ";amount:" << _amount << ";closed" <<std::endl;
}

void	Account::makeDeposit( int deposit )
{
	std::cout << "[" << std::flush;
	_displayTimestamp();
	std::cout << "] " << "index:" << _accountIndex << ";p_amount:" << _amount << std::flush;
	_amount = _amount + deposit;
	_totalAmount = _totalAmount + deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount << ";deposit:" << _nbDeposits <<std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "[" << std::flush;
	_displayTimestamp();
	std::cout << "] " << "index:" << _accountIndex << ";p_amount:" << _amount << std::flush;
	if (withdrawal > _amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount = _amount - withdrawal;
	_totalAmount = _totalAmount - withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";amount:" << _amount << ";withdrawal:" << _nbWithdrawals <<std::endl;
	return (true);
}
int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	std::cout << "[" << std::flush;
	_displayTimestamp();
	std::cout << "] " << "index:" << _accountIndex << ";amount:" << _amount << std::flush;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals <<std::endl;
}

void	Account::_displayTimestamp( void )
{
    std::time_t now 		= std::time(0);
    struct tm 	*localTime 	= std::localtime(&now);
    char 		buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localTime);
    
	std::cout << buffer << std::flush;
}