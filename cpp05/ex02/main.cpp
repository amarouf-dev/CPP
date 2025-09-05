/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:37 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/24 11:52:59 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
        std::cerr << e.what() << std::endl;
    }
    
    
    std::cout << "\n\n\nBUREAUCRAT EXEPTIONS TEST\n\n\n";

    try
    {
        Bureaucrat b("b", 150);
        b.GradeDecrement(15);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        Bureaucrat c("c", 1);
        c.GradeIncrement(1);
    }
    
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "\n\n\n";
        
        Bureaucrat a("Jemmy", 150);
        std::cout << a << std::endl;

        
        ShrubberyCreationForm sh;
        
        a.signForm(sh);

        sh.execute(a);
        
        a.executeForm(sh);
    }
    catch (std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    try 
    {
           RobotomyRequestForm r;
           r.doExecute();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try 
    {
        std::string str = "p";
        PresidentialPardonForm p(str);
        p.doExecute();
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}