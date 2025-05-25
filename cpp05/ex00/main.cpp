/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:37 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/25 23:26:55 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat b("name", 160);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what();
    }
    try
    {
        Bureaucrat b("name", 0);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what();
    }

    Bureaucrat a("Jemmy", 80);

    std::cout << a;


    
}
