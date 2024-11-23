/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 12:36:44 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/23 12:52:51 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data player1 = {100, "Skulls_crasher"};
	Data *ptr = &player1;

	uintptr_t temp = Serializer::serialize(ptr);
	Data *ptr2 = Serializer::deserialize(temp);

	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout <<"The addrees of ptr is: " << ptr << std::endl;
	std::cout <<"The addrees of temp is: " << temp << std::endl;
	std::cout <<"The addrees of ptr2 is: " << ptr2 << std::endl;
	std::cout << "-----------------------------------------------"<<std::endl;
	std::cout <<"Before serialization:"<<std::endl;
	std::cout <<"The info in ptr are: " << ptr->player_health << ", "<< ptr2->player_name<< std::endl;
	std::cout <<"After Deserialization:"<<std::endl;
	std::cout <<"The info in ptr2 are: " << ptr2->player_health << ", " << ptr2->player_name<< std::endl;
	return (0);
}
