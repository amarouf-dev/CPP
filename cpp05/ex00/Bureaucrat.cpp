/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:21 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/11 17:58:49 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _Name("Default"),_Grade(HIGHEST_GRADE){}

Bureaucrat::Bureaucrat(std::string name, int grade): _Name(name)
{
    if (grade < HIGHEST_GRADE)
        throw GradeTooHighException();
    if (grade > LOWEST_GRADE)
        throw GradeTooLowException();
    _Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& B)
{
    this->_Grade = B._Grade;
}

Bureaucrat::~Bureaucrat(){}

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
    return "Grade Too High !";
}

const char* Bureaucrat::GradeTooLowException::what()  const throw()
{
   return "Grade Too Low !";
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
    if (this->_Grade - nbr < HIGHEST_GRADE)
        throw GradeTooHighException();
    else
        this->_Grade -= nbr;
}

void Bureaucrat::GradeDecrement(int nbr)
{
    if (this->_Grade + nbr > LOWEST_GRADE)
        throw GradeTooLowException();
    else
        this->_Grade += nbr;
}
