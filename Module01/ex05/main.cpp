/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/01 16:46:28 by limartin      #+#    #+#                 */
/*   Updated: 2022/04/03 15:45:56 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl karl;
	karl.complain("lmao");
	karl.complain("INFO");
	karl.complain("DEBUG");
	karl.complain("WARNING");
	karl.complain("ERROR");
	karl.complain("ERR");
	karl.complain("error");
	return (0);
}
