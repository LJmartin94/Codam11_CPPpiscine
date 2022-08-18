/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 17:17:26 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/18 17:20:42 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
ScavTrap::ScavTrap()
{
	if (ScavTrap_DEBUG_MESSAGES)
		std::cout << "SCAVTRAP Default constructor called." << std::endl;
	return;
}

// Copy constructor
ScavTrap::ScavTrap( const ScavTrap& copy)
{
	if (ScavTrap_DEBUG_MESSAGES)
		std::cout << "SCAVTRAP Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
ScavTrap::~ScavTrap()
{
	if (ScavTrap_DEBUG_MESSAGES)
		std::cout << "SCAVTRAP Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
ScavTrap& ScavTrap::operator= ( const ScavTrap& assignment )
{
	if (ScavTrap_DEBUG_MESSAGES && ScavTrap_ADD_VERBOSE)
		std::cout << "SCAVTRAP Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		//TODO: REQUIRES PER CLASS IMPLEMENTATION
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic member variables & methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Private member variables & methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Accessors
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream operator overload
std::ostream& operator<< ( std::ostream& o, const ScavTrap& i )
{
	//TODO: REQUIRES PER CLASS IMPLEMENTATION
	o << i;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
