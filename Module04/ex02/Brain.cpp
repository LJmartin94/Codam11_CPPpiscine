/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:35 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/25 00:34:55 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors & Destructors
////////////////////////////////////////////////////////////////////////////////

// Default constructor
Brain::Brain()
{
	srand(time(NULL));
	if (Brain_DEBUG_MESSAGES)
		std::cout << "Brain Default constructor called." << std::endl;
	return;
}

// Copy constructor
Brain::Brain(const Brain& copy)
{
	if (Brain_DEBUG_MESSAGES)
		std::cout << "Brain Copy constructor called." << std::endl;
	*this = copy;
	return;
}

// Destructor
Brain::~Brain()
{
	if (Brain_DEBUG_MESSAGES)
		std::cout << "Brain Destructor called" << std::endl;
	return;
}

////////////////////////////////////////////////////////////////////////////////


// Operator overloads
////////////////////////////////////////////////////////////////////////////////

// Assignment operator overload (deep copy)
Brain& Brain::operator= (const Brain& assignment)
{
	if (Brain_DEBUG_MESSAGES && Brain_ADD_VERBOSE)
		std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &assignment)
	{
		for (int i = 0; i < BRAIN_SIZE; i++)
			this->_ideas[i] = assignment.Get_idea(i);
	}
	return(*this);
}

////////////////////////////////////////////////////////////////////////////////


// Pubic methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Protected methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Private methods
////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////


// Accessors
////////////////////////////////////////////////////////////////////////////////
std::string	Brain::Get_idea(unsigned int i) const
{
	if (i >= BRAIN_SIZE)
		return("That idea is just too out of the box to be thunk.");
	return(this->_ideas[i]);
}

void		Brain::Set_idea(unsigned int i, std::string genius)
{
	if (i >= BRAIN_SIZE)
		return;
	this->_ideas[i] = genius;
	return;
}
////////////////////////////////////////////////////////////////////////////////


// External to class
////////////////////////////////////////////////////////////////////////////////

//Stream operator overload
std::ostream& operator<< (std::ostream& o, const Brain& i)
{
	std::string idea = i.Get_idea( rand() % BRAIN_SIZE);
	if (idea.empty())
		o << "Mind blank." << std::endl;
	else
		o << "Here's a random thought I had: " << idea << std::endl;
	return (o);
}

////////////////////////////////////////////////////////////////////////////////
