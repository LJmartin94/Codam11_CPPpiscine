/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/25 13:32:44 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Cat::Cat()
: Animal("A feline animal")
{
	this->Set_type("Cat");
	if (Cat_DEBUG_MESSAGES)
	{
		std::cout << "Cat Default constructor called." << std::endl;
		std::cout << *this << std::endl;
	}
	this->_brain = new Brain;
	return;
}

// Copy constructor
Cat::Cat(const Cat& copy)
: Animal(copy)
{
	if (Cat_DEBUG_MESSAGES)
		std::cout << "Cat Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
Cat::~Cat()
{
	delete this->_brain;
	if (Cat_DEBUG_MESSAGES)
		std::cout << "Cat Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Cat& Cat::operator= (const Cat& assignment)
{
	if (Cat_DEBUG_MESSAGES && Cat_ADD_VERBOSE)
		std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		this->_type = assignment._type;
		this->Set_brain(assignment.Get_brain());
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic member variables & methods
////////////////////////////////////////////////////////////////////////////////

void	Cat::makeSound() const
{
	std::cout << "meow." << std::endl;
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
std::string Cat::Get_type(void) const
{
	return(this->_type);
}

Brain* Cat::Get_brain(void) const
{
	return(this->_brain);
}


void Cat::Set_type(std::string type)
{
	this->_type = type;
	return;
}

void Cat::Set_brain(Brain *brain)
{
	delete this->_brain;
	this->_brain = new Brain(*brain);
	return;
}
////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream operator overload
std::ostream& operator<< (std::ostream& o, const Cat& i)
{
	o << i.Get_type() << " goes ";
	i.makeSound(); //not great implementation as this always goes to std::cout
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
