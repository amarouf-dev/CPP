/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:38:29 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/09 17:14:20 by amarouf          ###   ########.fr       */
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
    OVF_,
    DOVF_,
};

class ScalarConverter
{
    private:
    
    // Checkers
    Type CheckType(std::string);
    void CheckDisplayChar(char c);
    bool CheckChar(std::string);
    bool CheckInt(std::string);
    bool Checkfloat(std::string);
    bool Checkdouble(std::string);
    
    // Converters
    void convert_int(std::string);
    void convert_char(std::string);
    void convert_float(std::string);
    void convert_double(std::string);
    void NoTypeFound(Type);

    public:

    ScalarConverter();
    ScalarConverter(ScalarConverter&);
    
    ScalarConverter& operator=(ScalarConverter&);
    
    ~ScalarConverter();
    
    void convert(std::string);
};

#endif