/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/18 14:41:27 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream> // Stream operators

# define CLAPTRAP_DEBUG_MESSAGES 1
# define CLAPTRAP_ADD_VERBOSE 1

class ClapTrap
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	// Default constructor
	ClapTrap(std::string name="No One", int hp=10, int nrg=10, int dmg=0);
	
	ClapTrap(const ClapTrap& copy);			// Copy constructor
	~ClapTrap();							// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	ClapTrap& operator= (const ClapTrap& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	std::string _name;
	int			_hp;
	int			_energy;
	int			_dmg;
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	////////////////////////////////////////////////////////////////////////////

};

// Stream operator overload
std::ostream& operator<< ( std::ostream& o, ClapTrap const & i );

#endif
