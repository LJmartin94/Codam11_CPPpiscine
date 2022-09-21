/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lindsay <lindsay@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/18 13:30:46 by lindsay       #+#    #+#                 */
/*   Updated: 2022/09/21 22:31:42 by limartin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main(void)
{
	// Data test;
	// std::cout << test;
	Data custom("A unique custom value");

	std::cout << std::endl << "Showing contents of Data: =============================" << std::endl;
	std::cout << "Stream insertion operator: " << std::endl << custom;
	std::cout << "Using member function of Data: " << std::endl;
	custom.function();
	Data *ptr = &custom;
	std::cout << "Address of custom: " << ptr << std::endl;
	std::cout << "=======================================================" << std::endl;

	std::cout << std::endl << "Serialising & deserialising. ==========================" << std::endl;
	uintptr_t serialised = serialize(ptr);
	std::cout << "Ptr original value: " << ptr << std::endl;
	std::cout << "Ptr serialised as unsigned int: " << serialised << std::endl;
	Data *deserialised = deserialize(serialised);
	std::cout << "Done. =================================================" << std::endl;

	std::cout << std::endl << "Showing contents of *deserialised: ====================" << std::endl;
	std::cout << "Stream insertion operator: " << std::endl << *deserialised;
	std::cout << "Using member function of Data: " << std::endl;
	deserialised->function();
	std::cout << "Address of *deserialised: " << deserialised << std::endl;
	std::cout << "=======================================================" << std::endl;

	
	return(0);
}
