/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 17:17:26 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/19 11:32:27 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
ScavTrap::ScavTrap(std::string name, \
unsigned int hp, unsigned int nrg, unsigned int dmg)
: ClapTrap(name)
{
	if (ScavTrap_DEBUG_MESSAGES)
		std::cout << "SCAVTRAP Default constructor called." << std::endl;
	
	this->Set_hp(hp);
	this->Set_energy(nrg);
	this->Set_dmg(dmg);

	if (ScavTrap_DEBUG_MESSAGES && ScavTrap_ADD_VERBOSE)
		std::cout << "My name is: " << this->Get_name() << ", my hp is: " 
		<< this->Get_hp() << ", my energy is: " << this->Get_energy() 
		<< ", my damage is: " << this->Get_dmg() << std::endl;
	return;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& copy)
: ClapTrap(copy)
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

void ScavTrap::attack(const std::string& target)
{
	if (!(this->Get_hp() > 0))
	{
		std::cout << "The SCAVTRAP (Not ClapTrap) formerly known as " << this->Get_name() 
		<< " wanted to attack " << target << ", but is already dead!" << std::endl;
	}
	else if (!(this->Get_energy() >= 1))
	{
		std::cout << "SCAVTRAP (Not ClapTrap) "<< this->Get_name() << " wanted to attack " << target 
		<< ", but does not have enough energy!" << std::endl;
	}
	else
	{
		std::cout << "SCAVTRAP (Not ClapTrap) "<< this->Get_name() << " attacks " << target 
		<< ", causing " << this->Get_dmg() << " points of damage!" << std::endl;
		this->Set_energy(this->Get_energy() - 1);
	}
	return;
}

void ScavTrap::guardGate()
{
	if (!(this->Get_hp() > 0))
	{
		std::cout << "The SCAVTRAP (Not ClapTrap) formerly known as " << this->Get_name() 
		<< " is too dead to guard a gate :(" << std::endl;
	}
	else if (!(this->Get_energy() >= 1))
	{
		std::cout << "SCAVTRAP (Not ClapTrap) "<< this->Get_name() << " would simply love to guard a gate,"
		<< " but does not have enough energy!" << std::endl;
	}
	else
	{
		std::cout << "SCAVTRAP (Not ClapTrap) "<< this->Get_name() << " is now in ~~Gate Keeper~~ mode! Gnarly!" << std::endl;
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
std::ostream& operator<< ( std::ostream& o, const ScavTrap& i )
{
	o << "My name is: " << i.Get_name() << ", my hp is: " << i.Get_hp() 
	<< ", my energy is: " << i.Get_energy() 
	<< ", my damage is: " << i.Get_dmg() << std::endl;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
