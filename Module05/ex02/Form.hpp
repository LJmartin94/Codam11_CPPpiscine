/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:42 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/02 14:53:29 by lindsay       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream> // Stream operators
#include "Bureaucrat.hpp" // Used in beSigned() member function
class Bureaucrat;

# define Form_DEBUG_MESSAGES 1
# define Form_ADD_VERBOSE 1

class Form
{
	// Constructors & Destructors
	////////////////////////////////////////////////////////////////////////////
	public:
	// Default constructor
	Form(std::string name = "Blank", std::string target = "None",\
	unsigned int to_sign = 150, unsigned int to_execute = 150);
	Form(const Form& copy);						// Copy constructor
	~Form();									// Destructor
	////////////////////////////////////////////////////////////////////////////

	// Operator overloads
	////////////////////////////////////////////////////////////////////////////
	public:
	Form& operator= (const Form& assignment);	// Assignment operator
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
	const std::string	_name;
	const std::string	_target;
	bool				_signed;
	const unsigned int	_signGrade;
	const unsigned int	_executeGrade;
	////////////////////////////////////////////////////////////////////////////

	// Accessors
	////////////////////////////////////////////////////////////////////////////
	public:
	std::string		Get_name(void) const;
	bool			Get_signed(void) const;
	unsigned int	Get_signGrade(void) const;
	unsigned int	Get_executeGrade(void) const;
	std::string		Get_target(void) const;

	void			beSigned(const Bureaucrat& signer); // Basically Set_signed
	////////////////////////////////////////////////////////////////////////////

	// Nested classes
	////////////////////////////////////////////////////////////////////////////
	private:
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Exception: Grade too high. (Form::GradeTooHighException)");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Exception: Grade too low. (Form::GradeTooLowException)");
			}
	};
	////////////////////////////////////////////////////////////////////////////
};

// Stream insertion operator overload
std::ostream& operator<< (std::ostream& o, Form const & i);

#endif
