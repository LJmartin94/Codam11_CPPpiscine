/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 17:17:23 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/19 11:26:31 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream> // Stream operators
#include "ClapTrap.hpp" // Parent class

# define ScavTrap_DEBUG_MESSAGES 1
# define ScavTrap_ADD_VERBOSE 1

class ScavTrap : public ClapTrap
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	// Default constructor
	ScavTrap(std::string name="No One", \
	unsigned int hp=100, unsigned int nrg=50, unsigned int dmg=20);
	
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
	void attack(const std::string& target);
	void guardGate();
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
