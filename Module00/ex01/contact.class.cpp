/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/01 17:40:37 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/01 17:44:36 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

// PUBLIC
Contact::Contact(void)
{
	std::cout << "Contact created." << std::endl;
	return;
}

Contact::~Contact(void)
{
	std::cout << "Contact destroyed." << std::endl;
	return;
}

// PRIVATE
