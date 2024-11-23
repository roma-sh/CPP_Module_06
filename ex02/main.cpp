/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:52:29 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/23 17:46:25 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void)
{

	std::cout<<"--------------" << std::endl;
	Base* general = generate();
	Base* a_obj = new A;
	// identify by pointer:
	identify(general);
	identify(a_obj);
	// identify by reference:
	identify(*general);
	identify(*a_obj);
	std::cout<<"--------------" << std::endl;

	A x_a;
	B x_b;
	C x_c;

	identify(x_a);
	identify(x_b);
	identify(x_c);

	delete general;
	delete a_obj;
	return (0);
}
