/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/08/31 16:56:10 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream> // Stream operators

# define Bureaucrat_DEBUG_MESSAGES 1
# define Bureaucrat_ADD_VERBOSE 1

class Bureaucrat
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	Bureaucrat();								// Default constructor
	Bureaucrat(const Bureaucrat& copy);		// Copy constructor
	~Bureaucrat();								// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Bureaucrat& operator= (const Bureaucrat& assignment);	// Assignment operator
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
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	////////////////////////////////////////////////////////////////////////////
};

// Stream operator overload
std::ostream& operator<< (std::ostream& o, Bureaucrat const & i);

#endif
