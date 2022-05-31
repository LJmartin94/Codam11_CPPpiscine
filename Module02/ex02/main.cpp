/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 19:14:51 by limartin      #+#    #+#                 */
/*   Updated: 2022/05/31 15:45:14 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream> //stream operators

int		main( void )
{
	bool testComparisonOps = false;
	Fixed 		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b )<< std::endl;

	if (testComparisonOps)
	{
		Fixed		lilGuy( 1.0f );
		Fixed		bigGuy( 2.0f );
		Fixed		sameGuy(lilGuy);

		if (bigGuy > lilGuy)
			std::cout << "good" << std::endl;
		else
			std::cout << "uh oh" << std::endl;

		if (lilGuy < bigGuy)
			std::cout << "good" << std::endl;
		else
			std::cout << "uh oh" << std::endl;

		if (bigGuy >= lilGuy)
			std::cout << "good" << std::endl;
		else
			std::cout << "uh oh" << std::endl;

		if (sameGuy >= lilGuy)
			std::cout << "good" << std::endl;
		else
			std::cout << "uh oh" << std::endl;

		if (lilGuy <= bigGuy)
			std::cout << "good" << std::endl;
		else
			std::cout << "uh oh" << std::endl;

		if (sameGuy <= lilGuy)
			std::cout << "good" << std::endl;
		else
			std::cout << "uh oh" << std::endl;

		if (sameGuy == lilGuy)
			std::cout << "good" << std::endl;
		else
			std::cout << "uh oh" << std::endl;

		if (bigGuy != lilGuy)
			std::cout << "good" << std::endl;
		else
			std::cout << "uh oh" << std::endl;
	}

	return (0);
}
