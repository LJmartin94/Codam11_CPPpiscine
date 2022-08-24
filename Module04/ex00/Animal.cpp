/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/24 19:39:32 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Animal::Animal(std::string type)
: _type(type)
{
	if (Animal_DEBUG_MESSAGES)
		std::cout << "ANIMAL Default constructor called." << std::endl;
	return;
}

// Copy constructor
Animal::Animal(const Animal& copy)
{
	if (Animal_DEBUG_MESSAGES)
		std::cout << "ANIMAL Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
Animal::~Animal()
{
	if (Animal_DEBUG_MESSAGES)
		std::cout << "ANIMAL Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Animal& Animal::operator= (const Animal& assignment)
{
	if (Animal_DEBUG_MESSAGES && Animal_ADD_VERBOSE)
		std::cout << "ANIMAL Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->_type = assignment._type;
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic member variables & methods
////////////////////////////////////////////////////////////////////////////////

void	Animal::makeSound() const
{
	std::cout << "AWOOGA i guess." << std::endl;
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
std::string Animal::Get_type(void) const
{
	return(this->_type);
}

void Animal::Set_type(std::string type)
{
	this->_type = type;
	return;
}
////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream operator overload
std::ostream& operator<< (std::ostream& o, const Animal& i)
{
	o << i.Get_type() << " goes ";
	i.makeSound(); //not great implementation as this always goes to std::cout
	o << std::endl;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
