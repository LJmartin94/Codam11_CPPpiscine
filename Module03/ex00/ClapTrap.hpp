/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/18 16:37:10 by lindsay       ########   odam.nl         */
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
	ClapTrap(std::string name="No One", \
	unsigned int hp=10, unsigned int nrg=10, unsigned int dmg=0);
	
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
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_energy;
	unsigned int	_dmg;
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	std::string		Get_name() const;
	unsigned int	Get_hp() const;
	unsigned int	Get_energy() const;
	unsigned int	Get_dmg() const;
	////////////////////////////////////////////////////////////////////////////

};

// Stream operator overload
std::ostream& operator<< ( std::ostream& o, ClapTrap const & i );

#endif
