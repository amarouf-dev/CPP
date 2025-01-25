/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:18:01 by amarouf           #+#    #+#             */
/*   Updated: 2024/11/23 16:27:18 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string& ref = *ptr;

    std::cout << &str << "\n";
    std::cout << ptr << "\n";
    std::cout << &ref << "\n";
    
    std::cout << str << "\n";
    std::cout << *ptr << "\n";
    std::cout << ref << "\n";
    return 0;
}
