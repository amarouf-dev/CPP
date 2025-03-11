/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:51:22 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/10 21:49:43 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account( int initial_deposit ): _amount (initial_deposit) 
{
	_nbAccounts ++;
	_accountIndex = _nbAccounts - 1;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";" << "created" << std::endl;
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount  << ";";
	std::cout << "deposits:" << _totalNbDeposits  << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_totalNbDeposits ++;
	_nbDeposits ++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "deposit:" <<  deposit << ";";
	std::cout << "amount:" <<  _amount + deposit << ";";
	std::cout << "nb_deposits:" <<  _nbDeposits << "\n";
	_amount += deposit;
	_totalAmount += deposit;

}
bool	Account::makeWithdrawal( int withdrawal )
{
	_totalNbWithdrawals ++;
	_nbWithdrawals ++;
	_displayTimestamp();
	if (withdrawal > _amount)
	{
		_nbWithdrawals --;
		_totalNbWithdrawals --;
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << _amount << ";";
		std::cout << "withdrawal:refused\n";
		return (false);
	}
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	std::cout << "withdrawal:" <<  withdrawal << ";";
	std::cout << "amount:" <<  _amount - withdrawal << ";";
	std::cout << "nb_withdrawals:" <<  _nbWithdrawals << "\n";
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	return (true);
}


void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t cur_time = time(0);
	tm *times = localtime(&cur_time);
	std::cout << '[' << times->tm_year + 1900 << times->tm_mon + 1 << times->tm_mday
		<< "_" << times->tm_hour << times->tm_min << times->tm_sec << "] ";
}

Account::~Account( void )
{
	_nbAccounts --;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";closed" << std::endl;
}
