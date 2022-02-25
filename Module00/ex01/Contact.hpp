/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:15:55 by limartin      #+#    #+#                 */
/*   Updated: 2022/02/07 14:17:04 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string> //string datatype
#include <iostream> //stream operators

class Contact
{
	public:
	Contact();
	~Contact();

	int set_firstName(std::string input);
	std::string get_firstName();
	int set_lastName(std::string input);
	std::string get_lastName();
	int set_nickname(std::string input);
	std::string get_nickname();
	int set_phoneNumber(std::string input);
	std::string get_phoneNumber();
	int set_secret(std::string input);
	std::string get_secret();

	private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
