/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/24 21:06:32 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"	// Parent Class
#include <iostream>		// Stream operators

# define WrongCat_DEBUG_MESSAGES 1
# define WrongCat_ADD_VERBOSE 1

class WrongCat : public WrongAnimal
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	WrongCat();									// Default constructor
	WrongCat(const WrongCat& copy);				// Copy constructor
	~WrongCat();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	WrongCat& operator= (const WrongCat& assignment);	// Assignment operator
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
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	std::string		Get_type(void) const;
	
	void 	Set_type(std::string type);
	////////////////////////////////////////////////////////////////////////////
};

// Stream operator overload
std::ostream& operator<< (std::ostream& o, WrongCat const & i);

#endif
