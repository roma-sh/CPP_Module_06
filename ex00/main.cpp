/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:59:53 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/17 19:35:15 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Not correct number of arguments" << std::endl
			<<"use: ./convert <argument>" << std::endl;
		return (1);
	}
	ScalarConverter::convert(std::string(argv[1]));
	return (0);
}
