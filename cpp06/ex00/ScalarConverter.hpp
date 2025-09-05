/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:38:29 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/28 17:24:22 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR
#define SCALAR

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <cmath>
#include <errno.h>
#include <limits.h>

enum Type
{
    CHAR_TYPE,
    INT_TYPE,
    FLOAT_TYPE,
    DOUBLE_TYPE,
    INVALID_TYPE,
    PINF_,
    NINF_,
};

class ScalarConverter
{
    private:
    ScalarConverter();
    
    // Checkers
    static Type CheckType(std::string);
    static void CheckDisplayChar(char c);
    static bool CheckChar(std::string);
    static bool CheckInt(std::string);
    static bool Checkfloat(std::string);
    static bool Checkdouble(std::string);
    
    // Converters
    static void convert_int(std::string);
    static void convert_char(std::string);
    static void convert_float(std::string);
    static void convert_double(std::string);
    static void NoTypeFound(Type);

    public:

    ScalarConverter(ScalarConverter&);
    
    ScalarConverter& operator=(ScalarConverter&);
    
    ~ScalarConverter();
    
    static void convert(std::string);
};

#endif