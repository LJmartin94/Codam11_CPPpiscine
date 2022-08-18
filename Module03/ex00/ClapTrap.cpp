/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/18 15:08:06 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
ClapTrap::ClapTrap(std::string name, int hp, int nrg, int dmg)
: _name(name), _hp(hp), _energy(nrg), _dmg(dmg)
{
	if (CLAPTRAP_DEBUG_MESSAGES)
		std::cout << "Default constructor called." << std::endl;
	if (CLAPTRAP_DEBUG_MESSAGES && CLAPTRAP_ADD_VERBOSE)
		std::cout << "My name is: " << _name << ", my hp is: " << _hp 
		<< ", my energy is: " << _energy << ", my damage is: " << _dmg << std::endl;
	return;
}

// Copy constructor
ClapTrap::ClapTrap( const ClapTrap& copy)
{
	if (CLAPTRAP_DEBUG_MESSAGES)
		std::cout << "Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
ClapTrap::~ClapTrap()
{
	if (CLAPTRAP_DEBUG_MESSAGES)
		std::cout << "Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
ClapTrap& ClapTrap::operator= ( const ClapTrap& assignment )
{
	if (CLAPTRAP_DEBUG_MESSAGES && CLAPTRAP_ADD_VERBOSE)
		std::cout << "Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		//TODO: REQUIRES PER CLASS IMPLEMENTATION
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////





// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream operator overload
std::ostream& operator<< ( std::ostream& o, const ClapTrap& i )
{
	//TODO: REQUIRES PER CLASS IMPLEMENTATION
	o << i;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
