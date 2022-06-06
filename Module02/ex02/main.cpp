/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 19:14:51 by limartin      #+#    #+#                 */
/*   Updated: 2022/06/06 15:21:05 by limartin      ########   odam.nl         */
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
	std::cout << std::endl;

	Fixed const c(8385000);
	std::cout << c << std::endl;
	Fixed const d( Fixed( 8385.0f ) * Fixed( 1000.0f ));
	std::cout << d << std::endl;
	std::cout << std::endl;

	Fixed minimal;
	++minimal;
	Fixed temp (minimal * Fixed(1.0f));
	std::cout << temp << std::endl;
	temp = (Fixed(1.0f) * minimal);
	std::cout << temp << std::endl;
	std::cout << std::endl;

	++minimal;
	temp = (Fixed(0.5f) * minimal);
	std::cout << temp << std::endl;
	temp = (minimal * Fixed(0.5f));
	std::cout << temp << std::endl;
	std::cout << std::endl;

	++minimal;
	temp = (Fixed(0.34f) * minimal);
	std::cout << temp << std::endl;
	temp = (minimal * Fixed(0.34f));
	std::cout << temp << std::endl;
	std::cout << std::endl;

	++minimal;
	temp = (Fixed(0.25f) * minimal);
	std::cout << temp << std::endl;
	temp = (minimal * Fixed(0.25f));
	std::cout << temp << std::endl;
	std::cout << std::endl;

	++minimal;
	temp = (Fixed(0.21f) * minimal);
	std::cout << temp << std::endl;
	temp = (minimal * Fixed(0.21f));
	std::cout << temp << std::endl;
	std::cout << std::endl;

	++minimal;
	temp = (Fixed(0.17f) * minimal);
	std::cout << temp << std::endl;
	temp = (minimal * Fixed(0.17f));
	std::cout << temp << std::endl;
	std::cout << std::endl;

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
