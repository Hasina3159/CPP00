#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <ctime>
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
	//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	std::cout << "[" << std::flush;
	_displayTimestamp();
	std::cout << "] " << "index:" << _accountIndex << ";amount:" << _amount << std::flush;
	std::cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals <<std::endl;
}

void	Account::_displayTimestamp( void )
{
	auto now = std::chrono::system_clock::now();
	std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    std::tm* localTime = std::localtime(&currentTime);
	std::cout << std::put_time(localTime, "%Y%m%d_%H%M%S") << std::flush;
}