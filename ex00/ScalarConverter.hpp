/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:42:03 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/20 05:55:16 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <climits>
#include <iomanip>

class  ScalarConverter
{
	private:
		 ScalarConverter();
	public:
		 ScalarConverter(ScalarConverter const &original);
		 ScalarConverter& operator=(ScalarConverter const &original);
		 ~ScalarConverter();

	static void convert(std::string input);
};

#endif
