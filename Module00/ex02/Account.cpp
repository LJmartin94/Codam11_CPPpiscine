/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/07 14:30:40 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/07 16:20:50 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

// PUBLIC

Account::Account( int initial_deposit )
{
	(void) initial_deposit;
	return ;
}

Account::~Account( void )
{
	return ;
}

int	Account::getNbAccounts( void )
{
	return (0);
}

int	Account::getTotalAmount( void )
{
	return (0);
}

int	Account::getNbDeposits( void )
{
	return (0);
}

int	Account::getNbWithdrawals( void )
{
	return (0);
}

void	Account::displayAccountsInfos( void )
{
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
	std::cout << "[TIME_STAMP]";
	return ;
}
