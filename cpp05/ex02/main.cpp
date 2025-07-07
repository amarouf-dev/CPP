/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:37 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/07 23:00:56 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    std::cout << "BUREAUCRAT GETTERS TEST\n\n\n";
    
    try
    {
        Bureaucrat g("Getter", 12);
        
        std::cout << "NAME: " << g.getName() << std::endl;
        std::cout << "GRADE: " << g.getGrade() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what();
    }
    
    
    std::cout << "\n\n\nBUREAUCRAT EXEPTIONS TEST\n\n\n";

    try
    {
        Bureaucrat b("b", 150);
        b.GradeDecrement(15);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what();
    }
    try
    {
        Bureaucrat c("c", 1);
        c.GradeIncrement(1);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what();
    }
    
    std::cout << "\n\n\n";
    
    Bureaucrat a("Jemmy", 5);
    std::cout << a;

    ShrubberyCreationForm sh;

    sh.execute(a);

}
