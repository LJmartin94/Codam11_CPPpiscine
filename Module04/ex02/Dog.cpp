/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/25 15:18:20 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Dog::Dog()
: Animal("A canine animal")
{
	this->Set_type("Dog");
	if (Dog_DEBUG_MESSAGES)
	{
		std::cout << "Dog Default constructor called." << std::endl;
		std::cout << *this << std::endl;
	}
	this->_brain = new Brain;
	return;
}

// Copy constructor
Dog::Dog(const Dog& copy)
: Animal(copy)
{
	if (Dog_DEBUG_MESSAGES)
		std::cout << "Dog Copy constructor called." << std::endl;
	this->_brain = NULL;
	*this = copy;
	return;
}

// Destructor
Dog::~Dog()
{
	delete this->_brain;
	if (Dog_DEBUG_MESSAGES)
		std::cout << "Dog Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Dog& Dog::operator= (const Dog& assignment)
{
	if (Dog_DEBUG_MESSAGES && Dog_ADD_VERBOSE)
		std::cout << "Dog Copy assignment operator called" << std::endl;
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

void	Dog::makeSound() const
{
	std::cout << "woof." << std::endl;
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
std::string Dog::Get_type(void) const
{
	return(this->_type);
}

Brain* Dog::Get_brain(void) const
{
	return(this->_brain);
}


void Dog::Set_type(std::string type)
{
	this->_type = type;
	return;
}

void Dog::Set_brain(Brain *brain)
{
	delete this->_brain;
	this->_brain = new Brain(*brain);
	return;
}
////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream operator overload
std::ostream& operator<< (std::ostream& o, const Dog& i)
{
	o << i.Get_type() << " goes ";
	i.makeSound(); //not great implementation as this always goes to std::cout
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
