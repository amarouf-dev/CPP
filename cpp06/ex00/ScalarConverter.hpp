/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:38:29 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/27 23:22:00 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR
#define SCALAR

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <cmath>

enum Type
{
    CHAR_TYPE,
    INT_TYPE,
    FLOAT_TYPE,
    DOUBLE_TYPE,
    INVALID_TYPE,
};

class ScalarConverter
{
    private:
    
    Type CheckType(std::string);
    
    public:
    ScalarConverter();
    ScalarConverter(ScalarConverter&);
    
    ScalarConverter& operator=(ScalarConverter&);
    
    
    ~ScalarConverter();
    
    // public:
    
    void convert(std::string);
};

// Checkers

bool CheckDisplayChar(char c);
bool CheckChar(std::string);
bool CheckInt(std::string);
bool Checkfloat(std::string);
bool Checkdouble(std::string);

// Converters
void convert_int(std::string);
void convert_char(std::string);
void convert_float(std::string);
void convert_double(std::string);
void NoTypeFound(void);

#endif