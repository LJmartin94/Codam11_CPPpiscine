/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/24 23:50:55 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//TODO: Make sure this is all-caps!
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream> // Stream operators
# include <stdlib.h> // Rand function
# define BRAIN_SIZE 100 // How many ideas fit in brain.

# define Brain_DEBUG_MESSAGES 1
# define Brain_ADD_VERBOSE 1


class Brain
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	Brain();								// Default constructor
	Brain(const Brain& copy);				// Copy constructor
	~Brain();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Brain& operator= (const Brain& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	////////////////////////////////////////////////////////////////////////////

	// Protected member variables & methods
	////////////////////////////////////////////////////////////////////////////
	protected:
	////////////////////////////////////////////////////////////////////////////

	// Private member variables & methods
	////////////////////////////////////////////////////////////////////////////
	private:
	std::string _ideas[BRAIN_SIZE];
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	std::string	Get_idea(unsigned int i) const;
	
	void		Set_idea(unsigned int i, std::string genius);
	////////////////////////////////////////////////////////////////////////////
};

// Stream operator overload
std::ostream& operator<< (std::ostream& o, Brain const & i);

#endif
