/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/18 14:31:53 by lindsay       ########   odam.nl         */
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
	ClapTrap();								// Default constructor
	ClapTrap(const ClapTrap& copy);			// Copy constructor
	~ClapTrap();							// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	ClapTrap& operator= (const ClapTrap& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	////////////////////////////////////////////////////////////////////////////
};

// Stream operator overload
std::ostream& operator<< ( std::ostream& o, ClapTrap const & i );

#endif
