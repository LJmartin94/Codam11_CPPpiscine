/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/24 21:06:13 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
WrongAnimal::WrongAnimal(std::string type)
: _type(type)
{
	if (WrongAnimal_DEBUG_MESSAGES)
	{
		std::cout << "WrongAnimal Default constructor called." << std::endl;
		std::cout << *this << std::endl;
	}
	return;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	if (WrongAnimal_DEBUG_MESSAGES)
		std::cout << "WrongAnimal Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	if (WrongAnimal_DEBUG_MESSAGES)
		std::cout << "WrongAnimal Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
WrongAnimal& WrongAnimal::operator= (const WrongAnimal& assignment)
{
	if (WrongAnimal_DEBUG_MESSAGES && WrongAnimal_ADD_VERBOSE)
		std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->_type = assignment._type;
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic member variables & methods
////////////////////////////////////////////////////////////////////////////////

void	WrongAnimal::makeSound() const
{
	std::cout << "AWrOOnGA i guess." << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Protected member variables & methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Private member variables & methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Accessors
////////////////////////////////////////////////////////////////////////////////
std::string WrongAnimal::Get_type(void) const
{
	return(this->_type);
}

void WrongAnimal::Set_type(std::string type)
{
	this->_type = type;
	return;
}
////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream operator overload
std::ostream& operator<< (std::ostream& o, const WrongAnimal& i)
{
	o << i.Get_type() << " goes ";
	i.makeSound(); //not great implementation as this always goes to std::cout
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
