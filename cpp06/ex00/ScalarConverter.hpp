/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:38:29 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/17 09:54:41 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR
#define SCALAR

#include <iostream>
#include <string>

class ScalarConverter
{
    private:
    
    void CheckDisplayChar(std::string);
    
    public:
    ScalarConverter();
    ScalarConverter(ScalarConverter&);

    ScalarConverter& operator=(ScalarConverter&);
    
    
    ~ScalarConverter();
    
    // public:
    class NotDisplayable : public std::exception
    {
        const char *what() const throw();
    };
    
    void convert(std::string);
};


#endif