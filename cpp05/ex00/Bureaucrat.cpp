/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:21 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/25 23:29:39 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _Name("Default"),_Grade(1){}

Bureaucrat::Bureaucrat(std::string name, int grade): _Name(name),_Grade(grade)
{
    if (this->_Grade < 1)
        throw GradeTooLowException();
    if (this->_Grade > 150)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& B)
{
    this->_Grade = B._Grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& B)
{
    this->_Grade = B._Grade;
    return (*this);
}

std::ostream& operator<< (std::ostream &out, Bureaucrat &Bc)
{
    out << Bc.getName() << ", bureaucrat grade " << Bc.getGrade() << std::endl;
    return (out);
}

const char* Bureaucrat::GradeTooHighException::what()  const throw()
{
    return "Invalid Grade: Too High !\n";
}

const char* Bureaucrat::GradeTooLowException::what()  const throw()
{
   return "Invalid Grade: Too Low !\n";
}

const std::string Bureaucrat::getName(void)
{
    return (this->_Name);
}

int Bureaucrat::getGrade(void)
{
    return (this->_Grade);
}

void Bureaucrat::GradeIncrement(int nbr)
{
    this->_Grade += nbr;
}

void Bureaucrat::GradeDecrement(int nbr)
{
    this->_Grade -= nbr;
}

