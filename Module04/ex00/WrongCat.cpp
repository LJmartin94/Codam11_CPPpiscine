/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/24 21:06:26 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
WrongCat::WrongCat()
: WrongAnimal("A feline WrongAnimal")
{
	this->Set_type("WrongCat");
	if (WrongCat_DEBUG_MESSAGES)
	{
		std::cout << "WrongCat Default constructor called." << std::endl;
		std::cout << *this << std::endl;
	}
	return;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat& copy)
: WrongAnimal(copy)
{
	if (WrongCat_DEBUG_MESSAGES)
		std::cout << "WrongCat Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
WrongCat::~WrongCat()
{
	if (WrongCat_DEBUG_MESSAGES)
		std::cout << "WrongCat Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
WrongCat& WrongCat::operator= (const WrongCat& assignment)
{
	if (WrongCat_DEBUG_MESSAGES && WrongCat_ADD_VERBOSE)
		std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->_type = assignment._type;
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic member variables & methods
////////////////////////////////////////////////////////////////////////////////

void	WrongCat::makeSound() const
{
	std::cout << "wrong meow." << std::endl;
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
std::string WrongCat::Get_type(void) const
{
	return(this->_type);
}

void WrongCat::Set_type(std::string type)
{
	this->_type = type;
	return;
}
////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream operator overload
std::ostream& operator<< (std::ostream& o, const WrongCat& i)
{
	o << i.Get_type() << " goes ";
	i.makeSound(); //not great implementation as this always goes to std::cout
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
