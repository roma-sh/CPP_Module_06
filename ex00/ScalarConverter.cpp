/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:42:06 by rshatra           #+#    #+#             */
/*   Updated: 2024/11/25 10:06:21 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ##########################################################################
// ###################### Orthodox Canonical Form ###########################
// ##########################################################################

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(ScalarConverter const &original) {(void)original;}
ScalarConverter::~ScalarConverter() {}
ScalarConverter& ScalarConverter::operator=(ScalarConverter const &original)
{
	(void)original;
	return (*this);
}
// ##########################################################################
// ########################### Converting Part ##############################
// ##########################################################################

int	validateChar(std::string input)
{
	if (input.empty())
		return (0);
	if (input.size() == 1 && !isdigit(input[0]) && input[0] != '+' || input[0] != '-')
		return (1);
	return (0);
}

int	validateDouble(std::string input)
{
	size_t i = 0;
	int dot_counter = 0;

	if (input.empty() || input.size() == 1)
		return (0);
	if (input[i] == '+' || input[i] == '-')
		i++;
	for (; i < input.size(); i++)
	{
		if (input[i] == '.')
			dot_counter++;
		else if (!isdigit(input[i]))
			return (0);
	}
	return (dot_counter == 1);
}

int	validateInt(std::string input)
{
	size_t i = 0;
	if (input.empty())
		return (0);
	if (input.size() > 1 && (input[0] == '-' && input[0] == '+'))
		i++;
	for (; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
			return (0);
	}
	return (1);
}

int	validateFloat(std::string input)
{
	size_t i = 0;
	int dot_counter = 0;

	if (input.empty() || input.size() == 1)
		return (0);
	if (input[input.size() - 1] != 'f')
		return (0);
	if (input[i] == '+' || input[i] == '-')
		i++;
	for (; i < input.size() - 1; i++)
	{
		if (input[i] == '.')
			dot_counter++;
		else if (!isdigit(input[i]))
			return (0);
	}
	return (dot_counter == 1);
}

void	convertChar(std::string input)
{
	std::cout << "char: '" << input[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
}

void	convertInt(std::string input)
{
	int i = atoi(input.c_str());
	if ( i < INT_MIN || i > INT_MAX)
		std::cerr<< "ERROR: HUUUUGE number dude" << std::endl;
	if (i >= 32 && i <= 127)
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " //without std::fixed it will handle numbers in form of Scientific Notation
	// which handle numbers like: 123456 ==> 1.23456 * 10^5
	//							  0.00042 ==> 4.2 * 10^-4
	// setprecision(1) to print 1 number after the .
		<< static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	convertDouble(std::string input)
{
	double i = atof(input.c_str()); // return double
	int i_int = 0;
	if ( i < INT_MIN || i > INT_MAX)
		std::cerr<< "ERROR: HUUUUGE number dude" << std::endl;
	if (i > INT_MAX || i < INT_MIN)
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		i_int = static_cast<int>(i);
		if (isprint(static_cast<unsigned char>(i_int)))
			std::cout << "char: '" << static_cast<char>(i_int) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << i_int << std::endl;
	}
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << i << std::endl;
}

void	convertFloat(std::string input)
{
	float i = static_cast<float>(atof(input.c_str())); // return double
	int i_int = 0;

	if (i > INT_MAX || i < INT_MIN)
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		i_int = static_cast<int>(i);
		if (isprint(static_cast<unsigned char>(i_int)))
			std::cout << "char: '" << static_cast<char>(i_int) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;

		std::cout << "int: " << i_int << std::endl;
	}
	std::cout << std::fixed << std::setprecision(1) << "float: " << i << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void ScalarConverter::convert(std::string input)
{
	if (input == "nan" || input == "nanf")
	{
		std::cout<<"char: impossible" <<std::endl;
		std::cout<<"int: impossible"<<std::endl;
		std::cout<< "float: nanf"<<std::endl;
		std::cout<<"diuble: nan"<<std::endl;
		return ;
	}
	if (input == "-inf" || input == "-inff")
	{
		std::cout<<"char: impossible" <<std::endl;
		std::cout<<"int: impossible"<<std::endl;
		std::cout<< "float: -inff"<<std::endl;
		std::cout<<"diuble: -inf"<<std::endl;
		return ;
	}
	if (input == "+inf" || input == "inf" || input == "+inff" || input == "inff")
	{
		std::cout<<"char: impossible" <<std::endl;
		std::cout<<"int: impossible"<<std::endl;
		std::cout<< "float: +inff"<<std::endl;
		std::cout<<"diuble: +inf"<<std::endl;
		return ;
	}
	if (validateChar(input) == 1)
		convertChar(input);
	else if(validateInt(input) == 1)
		convertInt(input);
	else if(validateDouble(input) == 1)
		convertDouble(input);
	else if(validateFloat(input) == 1)
		convertDouble(input);
	else
		std::cout << "not correct type of data :(" << std::endl;
}
