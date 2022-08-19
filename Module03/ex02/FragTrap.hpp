/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 17:17:23 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/19 14:19:51 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream> // Stream operators
#include "ClapTrap.hpp" // Parent class

# define FragTrap_DEBUG_MESSAGES 1
# define FragTrap_ADD_VERBOSE 1

class FragTrap : public ClapTrap
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	// Default constructor
	FragTrap(std::string name="No One", \
	unsigned int hp=100, unsigned int nrg=100, unsigned int dmg=30);
	
	FragTrap(const FragTrap& copy);		// Copy constructor
	~FragTrap();						// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	FragTrap& operator= (const FragTrap& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	void highFivesGuys(void);
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	unsigned int _highFivesGiven;
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	////////////////////////////////////////////////////////////////////////////
};

// Stream operator overload
std::ostream& operator<< ( std::ostream& o, FragTrap const & i );

#endif
