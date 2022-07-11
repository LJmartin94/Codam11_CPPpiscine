/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: limartin <limartin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/10 19:14:51 by limartin      #+#    #+#                 */
/*   Updated: 2022/07/11 12:59:42 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream> //stream operators

int		main( void )
{
	bool frationalBitsRabbitHole = false;
	bool testFloatsAndMultiplication = true;
	bool testComparisonOps = false;
	// Fixed 		a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// std::cout << "Tests specified by subject:" << std::endl;
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b )<< std::endl;
	// std::cout << std::endl;

	if (frationalBitsRabbitHole)
	{
		Fixed cpp;
		cpp.setRawBits(INT_MAX);
		std::cout << "Largest number you can possibly store:                    " << cpp << std::endl;

		Fixed small;
		small++;
		std::cout << "Smallest difference you can possibly store:               " << small << std::endl;

		cpp.setRawBits(INT_MIN);
		std::cout << "Smallest number you can possibly store:                   " << cpp << std::endl;
	}
	if (testFloatsAndMultiplication)
	{
		// Fixed const c(8388607.749f);
		// std::cout << "Largest number you can store using the float constructor: " << c << std::endl;
		// Fixed cpp;
		// cpp.setRawBits(INT_MAX);
		// std::cout << "Largest number you can possibly store:                    " << cpp << std::endl;
		// Fixed wut(8388608); //one bit larger than the largest number it can represent
		// --wut;
		// std::cout << "Storing 8388608 as int and underflowing the overflow:     " << wut << std::endl;
	
		std::cout << std::endl << "Testing some multiplications:" << std::endl;
		// Fixed const neg( Fixed( -4000.56789f ) * Fixed( 1000.0f ));
		// Fixed const neg( Fixed( -3.27679999847412109376f ) * Fixed( 10000.0f ));
		// std::cout << neg << std::endl;
		Fixed const twosevenfive(-2.75f);
		std::cout << twosevenfive << std::endl;

		// Fixed const d( Fixed( 8388.608f ) * Fixed( 1000.0f ));
		// std::cout << d << std::endl;
		// Fixed const e( Fixed( 2896.3092f ) * Fixed( 2896.3092f ));
		// std::cout << e << std::endl;
		// std::cout << std::endl;

		// Fixed minimal;
		// ++minimal;
		// Fixed temp (minimal * Fixed(1.0f));
		// std::cout << temp << std::endl;
		// temp = (Fixed(1.0f) * minimal);
		// std::cout << temp << std::endl;
		// temp = cpp * minimal;
		// std::cout << temp << std::endl;
		// std::cout << std::endl;

		// ++minimal;
		// temp = (Fixed(0.5f) * minimal);
		// std::cout << temp << std::endl;
		// temp = (minimal * Fixed(0.5f));
		// std::cout << temp << std::endl;
		// std::cout << std::endl;

		// ++minimal;
		// temp = (Fixed(0.34f) * minimal);
		// std::cout << temp << std::endl;
		// temp = (minimal * Fixed(0.34f));
		// std::cout << temp << std::endl;
		// std::cout << std::endl;

		// ++minimal;
		// temp = (Fixed(0.25f) * minimal);
		// std::cout << temp << std::endl;
		// temp = (minimal * Fixed(0.25f));
		// std::cout << temp << std::endl;
		// std::cout << std::endl;

		// ++minimal;
		// temp = (Fixed(0.21f) * minimal);
		// std::cout << temp << std::endl;
		// temp = (minimal * Fixed(0.21f));
		// std::cout << temp << std::endl;
		// std::cout << std::endl;

		// ++minimal;
		// temp = (Fixed(0.17f) * minimal);
		// std::cout << temp << std::endl;
		// temp = (minimal * Fixed(0.17f));
		// std::cout << temp << std::endl;
		// std::cout << std::endl;
	}

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
