/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:49:45 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/23 17:20:11 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {}

Base* generate(void)
{
	Base* all[3];

	all[0] = new A;
	all[1] = new B;
	all[2] = new C;

	std::srand(std::time(nullptr));
	int random_num = std::rand() % 3;

	for(int i = 0; i < 3; i++)
	{
		if (i != random_num)
			delete all[i];
	}
	return (all[random_num]);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "the type is: A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "the type is: B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "the type is: C" << std::endl;
}

void identify(Base& p)
{
	try // If p is not of type A, dynamic_cast will throw a std::bad_cast exception.
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "the type is: A" << std::endl;
	}
	catch (std::exception &e) // &e is a reference(reference to avoid copying e) to the caught exception object
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "the type is: B" << std::endl;
		}
		catch (std::exception &e)
		{
				try
				{
					C &c = dynamic_cast<C &>(p);
					(void)c;
					std::cout << "the type is: C" << std::endl;
				}
				catch (std::exception &e)
				{
					std::cerr << "It's UNKNOWN type " << e.what() << std::endl;
				}
		}
	}
}


/*
1- Pass by Value:
	The function receives a copy of the argument.
	Changes inside the function do not affect the original variable.

2- Pass by Pointer:
	The function receives a pointer to the variable.
	The function can modify the original variable via the pointer.

3- Pass by Reference:
	The function receives a reference to the variable.
	The function can directly access and modify the original variable.
*/
