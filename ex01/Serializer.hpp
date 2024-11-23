/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 06:08:26 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/23 12:42:48 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

struct Data
{
	int player_health;
	std::string player_name;
};

class Serializer
{
	private:
		Serializer();
	public:

		Serializer(Serializer& original);
		Serializer& operator=(Serializer& original);
		~Serializer();
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};



#endif
