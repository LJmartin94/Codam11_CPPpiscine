/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/07 14:30:40 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/07 18:48:47 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

// PUBLIC

Account::Account( int initial_deposit )
{
	(void) initial_deposit;
	
	this->_displayTimestamp();
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
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void) withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (0);
}

void	Account::displayStatus( void ) const
{
	this->_displayTimestamp();
	std::cout << "STATUS" << std::endl;
	return ;
}



// PRIVATE

// 	static int	_nbAccounts;
// 	static int	_totalAmount;
// 	static int	_totalNbDeposits;
// 	static int	_totalNbWithdrawals;

// 	int				_accountIndex;
// 	int				_amount;
// 	int				_nbDeposits;
// 	int				_nbWithdrawals;

void	Account::_displayTimestamp( void )
{
	std::cout << "[TIME_STAMP] ";
	return ;
}
