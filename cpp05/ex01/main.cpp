/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:37 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/11 17:59:57 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

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
    
    std::cout << "\n\n\n";
    
    Bureaucrat a("Jemmy", 5);
    std::cout << a  << std::endl;

    try
    {
        Form F("FFF", 13, 12);
        std::cout << F << std::endl;
        F.beSigned(a);
        std::cout << F << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    // Getters Test

    std::cout << "\n\n\n FORM GETTERS TEST\n\n\n";

    Form S("SSS", 1, 2);
    
    std::cout << "NAME: " << S.get_Name() << std::endl;
    std::cout << "GradeToExecute: " << S.getGradeToExecute() << std::endl;
    std::cout << "GradeToSign: " << S.getGradeToSign() << std::endl;
    std::cout << "Is Signed: " << S.getIs_signed() << std::endl;
}
