/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/02 17:33:46 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//TODO: Make sure this is all-caps!
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream> // Stream operators
#include "Form.hpp" // Parent class

# define PresidentialPardonForm_DEBUG_MESSAGES 1
# define PresidentialPardonForm_ADD_VERBOSE 1

class PresidentialPardonForm : public Form
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	// Default constructor
	PresidentialPardonForm(std::string target = "None");
	// Copy constructor
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	// Destructor
	~PresidentialPardonForm();
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	// PresidentialPardonForm& operator= (const PresidentialPardonForm& assignment);	// Assignment operator
	////////////////////////////////////////////////////////////////////////////

	// Pubic member variables & methods
	////////////////////////////////////////////////////////////////////////////
	public:
	void	execute(const Bureaucrat& executor) const;
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

	// Nested classes
	////////////////////////////////////////////////////////////////////////////
	private:
	////////////////////////////////////////////////////////////////////////////
};

// Stream insertion operator overload
// Inherited from parent.

#endif
