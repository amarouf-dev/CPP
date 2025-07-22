/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:38:29 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/17 12:06:02 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR
#define SCALAR

#include <iostream>
#include <string>
#include <exception>

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
void CheckDisplayChar(std::string);
bool CheckChar(std::string);
bool CheckInt(std::string);
bool Checkfloat(std::string);
bool Checkdouble(std::string);

#endif