/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 17:17:26 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/19 14:21:17 by limartin      ########   odam.nl         */
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
	this->_highFivesGiven = 0;

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
		this->_highFivesGiven = assignment._highFivesGiven;
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic member variables & methods
////////////////////////////////////////////////////////////////////////////////

void FragTrap::highFivesGuys(void)
{
	if (!(this->Get_hp() > 0))
	{
		std::cout << "The FragTRAP (Not ClapTrap) formerly known as " << this->Get_name() 
		<< " is too dead to high-five you :(" <<  std::endl;
		std::cout << "High fives succesfully given: " << this->_highFivesGiven << std::endl;
	}
	else if (!(this->Get_energy() >= 1))
	{
		std::cout << "FragTRAP (Not ClapTrap) "<< this->Get_name() 
		<< " wanted to give you a high five, but was too slow as they have no energy." << std::endl;
		std::cout << "High fives succesfully given: " << this->_highFivesGiven << std::endl;
	}
	else
	{
		std::cout << "FragTRAP (Not ClapTrap) "<< this->Get_name() << " positively requests a HI 5! *BEEP BOOP*" << std::endl;
		this->Set_energy(this->Get_energy() - 1);
		this->_highFivesGiven++;
		std::cout << "High fives succesfully given: " << this->_highFivesGiven << std::endl;
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
