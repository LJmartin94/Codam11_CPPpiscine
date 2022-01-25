/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.class.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/24 21:08:36 by limartin      #+#    #+#                 */
/*   Updated: 2022/01/25 17:59:47 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class Phonebook
{
	public:
	Phonebook(void);
	~Phonebook(void);
	int doCommand(std::string buf);
	
	private:
	int ft_add();
	int ft_search();
	int ft_exit();
	int ft_error();
	int (Phonebook::*commands[4])() = {ft_add, ft_search, ft_exit, ft_error};
	enum _CommandType { ADD, SEARCH, EXIT, ERROR};
};

#endif
