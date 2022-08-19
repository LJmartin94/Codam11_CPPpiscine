/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 17:17:26 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/19 11:47:43 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
FragTrap::FragTrap(std::string name, \
unsigned int hp, unsigned int nrg, unsigned int dmg)
: ClapTrap(name)
{
	if (FragTrap_DEBUG_MESSAGES)
		std::cout << "FragTRAP Default constructor called." << std::endl;
	
	this->Set_hp(hp);
	this->Set_energy(nrg);
	this->Set_dmg(dmg);

	if (FragTrap_DEBUG_MESSAGES && FragTrap_ADD_VERBOSE)
		std::cout << "My name is: " << this->Get_name() << ", my hp is: " 
		<< this->Get_hp() << ", my energy is: " << this->Get_energy() 
		<< ", my damage is: " << this->Get_dmg() << std::endl;
	return;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& copy)
: ClapTrap(copy)
{
	if (FragTrap_DEBUG_MESSAGES)
		std::cout << "FragTRAP Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
FragTrap::~FragTrap()
{
	if (FragTrap_DEBUG_MESSAGES)
		std::cout << "FragTRAP Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
FragTrap& FragTrap::operator= ( const FragTrap& assignment )
{
	if (FragTrap_DEBUG_MESSAGES && FragTrap_ADD_VERBOSE)
		std::cout << "FragTRAP Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->Set_name(assignment.Get_name());
		this->Set_hp(assignment.Get_hp());
		this->Set_energy(assignment.Get_energy());
		this->Set_dmg(assignment.Get_dmg());
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic member variables & methods
////////////////////////////////////////////////////////////////////////////////

void FragTrap::attack(const std::string& target)
{
	if (!(this->Get_hp() > 0))
	{
		std::cout << "The FragTRAP (Not ClapTrap) formerly known as " << this->Get_name() 
		<< " wanted to attack " << target << ", but is already dead!" << std::endl;
	}
	else if (!(this->Get_energy() >= 1))
	{
		std::cout << "FragTRAP (Not ClapTrap) "<< this->Get_name() << " wanted to attack " << target 
		<< ", but does not have enough energy!" << std::endl;
	}
	else
	{
		std::cout << "FragTRAP (Not ClapTrap) "<< this->Get_name() << " attacks " << target 
		<< ", causing " << this->Get_dmg() << " points of damage!" << std::endl;
		this->Set_energy(this->Get_energy() - 1);
	}
	return;
}

void FragTrap::guardGate()
{
	if (!(this->Get_hp() > 0))
	{
		std::cout << "The FragTRAP (Not ClapTrap) formerly known as " << this->Get_name() 
		<< " is too dead to guard a gate :(" << std::endl;
	}
	else if (!(this->Get_energy() >= 1))
	{
		std::cout << "FragTRAP (Not ClapTrap) "<< this->Get_name() << " would simply love to guard a gate,"
		<< " but does not have enough energy!" << std::endl;
	}
	else
	{
		std::cout << "FragTRAP (Not ClapTrap) "<< this->Get_name() << " is now in ~~Gate Keeper~~ mode! Gnarly!" << std::endl;
		this->Set_energy(this->Get_energy() - 1);
	}
	return;
}

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
std::ostream& operator<< ( std::ostream& o, const FragTrap& i )
{
	o << "My name is: " << i.Get_name() << ", my hp is: " << i.Get_hp() 
	<< ", my energy is: " << i.Get_energy() 
	<< ", my damage is: " << i.Get_dmg() << std::endl;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
