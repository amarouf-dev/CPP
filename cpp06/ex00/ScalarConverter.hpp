/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 08:38:29 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/14 12:05:04 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR
#define SCALAR

#include <iostream>

class ScalarConverter
{
    private:
    ScalarConverter();
    ScalarConverter(ScalarConverter&);

    ScalarConverter& operator=(ScalarConverter&);
    
    class NotDisplayable
    {
        const char *what() const throw();
    };

    ~ScalarConverter();

    void convert(std::string);
};


#endif