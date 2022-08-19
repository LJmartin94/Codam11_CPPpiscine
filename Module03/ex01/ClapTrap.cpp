/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/19 10:39:21 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
ClapTrap::ClapTrap(std::string name, \
unsigned int hp, unsigned int nrg, unsigned int dmg)
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
		this->_name = assignment.Get_name();
		this->_hp = assignment.Get_hp();
		this->_energy = assignment.Get_energy();
		this->_dmg = assignment.Get_dmg();
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic member variables & methods
////////////////////////////////////////////////////////////////////////////////
	
void ClapTrap::attack(const std::string& target)
{
	if (!(this->_hp > 0))
	{
		std::cout << "The ClapTrap formerly known as " << this->_name 
		<< " wanted to attack " << target << ", but is already dead!" << std::endl;
	}
	else if (!(this->_energy >= 1))
	{
		std::cout << "ClapTrap "<< this->_name << " wanted to attack " << target 
		<< ", but does not have enough energy!" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap "<< this->_name << " attacks " << target 
		<< ", causing " << this->_dmg << " points of damage!" << std::endl;
		this->_energy--;
	}
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!(this->_hp > 0))
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
	}
	else if (amount > this->_hp)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount 
		<< " points of damage and died. OVERKILL!" << std::endl;
		this->_hp = 0;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount 
		<< " points of damage";
		this->_hp = this->_hp - amount;
		if (this->_hp <= 0)
			std::cout << " and died";
		else
			std::cout << ". They now have " << this->_hp << " hitpoints left";
		std::cout << "." << std::endl;
	}
	return;
}
	
void ClapTrap::beRepaired(unsigned int amount)
{
	if (!(this->_hp > 0))
	{
		std::cout << "ClapTrap " << this->_name 
		<< " is already dead, and cannot be repaired. :(" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " was repaired for " << amount 
		<< ", and now has ";
		this->_hp = this->_hp + amount;
		std::cout << this->_hp << " hitpoints." << std::endl;
	}
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Accessors
////////////////////////////////////////////////////////////////////////////////
	
std::string		ClapTrap::Get_name() const
{
	return(this->_name);
}

unsigned int	ClapTrap::Get_hp() const
{
	return(this->_hp);
}

unsigned int	ClapTrap::Get_energy() const
{
	return(this->_energy);
}

unsigned int	ClapTrap::Get_dmg() const
{
	return(this->_dmg);
}

void 			ClapTrap::Set_name(std::string arg)
{
	this->_name = arg;
	return;
}

void 			ClapTrap::Set_hp(unsigned int arg)
{
	this->_hp = arg;
	return;
}

void 			ClapTrap::Set_energy(unsigned int arg)
{
	this->_energy = arg;
	return;
}

void 			ClapTrap::Set_dmg(unsigned int arg)
{
	this->_dmg = arg;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream operator overload
std::ostream& operator<< ( std::ostream& o, const ClapTrap& i )
{
	o << "My name is: " << i.Get_name() << ", my hp is: " << i.Get_hp() 
	<< ", my energy is: " << i.Get_energy() 
	<< ", my damage is: " << i.Get_dmg() << std::endl;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
