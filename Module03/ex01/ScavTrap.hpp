/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 17:17:23 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/18 17:19:11 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream> // Stream operators

# define ScavTrap_DEBUG_MESSAGES 1
# define ScavTrap_ADD_VERBOSE 1

class ScavTrap
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	ScavTrap();							// Default constructor
	ScavTrap(const ScavTrap& copy);		// Copy constructor
	~ScavTrap();						// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	ScavTrap& operator= (const ScavTrap& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	////////////////////////////////////////////////////////////////////////////
};

// Stream operator overload
std::ostream& operator<< ( std::ostream& o, ScavTrap const & i );

#endif
