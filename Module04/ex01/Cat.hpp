/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/25 00:53:08 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"	// Parent class
#include "Brain.hpp"	// Member variable class
#include <iostream>		// Stream operators

# define Cat_DEBUG_MESSAGES 1
# define Cat_ADD_VERBOSE 1

class Cat : public Animal
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	Cat();										// Default constructor
	Cat(const Cat& copy);						// Copy constructor
	~Cat();										// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Cat& operator= (const Cat& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	void	makeSound() const;
	////////////////////////////////////////////////////////////////////////////

	// Protected member variables & methods
	////////////////////////////////////////////////////////////////////////////
	protected:
	std::string		_type;
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	Brain* _brain;
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	std::string		Get_type(void) const;
	Brain*			Get_brain(void) const;
	
	void 			Set_type(std::string type);
	void			Set_brain(Brain* brain);
	////////////////////////////////////////////////////////////////////////////
};

// Stream operator overload
std::ostream& operator<< (std::ostream& o, Cat const & i);

#endif
