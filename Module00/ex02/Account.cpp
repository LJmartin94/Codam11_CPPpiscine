/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/07 14:30:40 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/11 17:31:08 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


// PUBLIC
Account::Account( int initial_deposit ) 
: _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{	
	Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	return ;
}

Account::~Account( void )
{
	this->_displayTimestamp();
	std::cout << "closed" << std::endl;
	return ;
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "INFOS" << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit )
{
	(void) deposit;
	std::cout << "depos" << std::endl;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void) withdrawal;
	std::cout << "withdrw" << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	std::cout << "check" << std::endl;
	return (0);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << "STATUS" << std::endl;
	return ;
}


// PRIVATE
void	Account::_displayTimestamp( void )
{
	std::cout << "[TIME_STAMP] ";
	return ;
}
