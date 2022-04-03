/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/01 16:46:31 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/03 17:00:47 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>  //string datatype
#include <iostream> //stream operators

class Harl
{
	public:
	Harl();
	~Harl();

	void	complain ( std::string level );
	enum	ComplaintType { NA = -1, DEBUG, INFO, WARNING, ERROR, SIZE };
	std::string lookupTable[SIZE];
	
	private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	
	void	(Harl::*complaints[SIZE])( void );
};

#endif
