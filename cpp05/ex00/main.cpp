/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:37 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/22 17:22:09 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        Bureaucrat b("b", 150);
        b.GradeDecrement(15);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("c", 1);
        c.GradeIncrement(1);
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    Bureaucrat a("Jemmy", 80);
    std::cout << a;
}
