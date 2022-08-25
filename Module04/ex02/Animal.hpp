/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/25 15:48:23 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream> // Stream operators
#include "Brain.hpp" // Member variable of child class

# define Animal_DEBUG_MESSAGES 1
# define Animal_ADD_VERBOSE 1

class Animal
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	Animal(std::string type = "Unknown animal");	// Default constructor
	Animal(const Animal& copy);						// Copy constructor
	virtual ~Animal();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Animal& operator= (const Animal& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	virtual void	makeSound() const;
	////////////////////////////////////////////////////////////////////////////

	// Protected member variables & methods
	////////////////////////////////////////////////////////////////////////////
	protected:
	std::string		_type;
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	virtual std::string		Get_type(void) const;
	virtual Brain*			Get_brain(void) const;
	
	virtual void 			Set_type(std::string type);
	virtual void 			Set_brain(Brain* brain);
	////////////////////////////////////////////////////////////////////////////
};

// Stream operator overload
std::ostream& operator<< (std::ostream& o, Animal const & i);

#endif
