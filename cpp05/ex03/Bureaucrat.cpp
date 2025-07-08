/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:21 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/08 01:38:28 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _Name("Default"), _Grade(HIGHEST_GRADE){}

Bureaucrat::Bureaucrat(std::string name, int grade): _Name(name)
{
    if (grade < HIGHEST_GRADE)
        throw GradeTooLowException();
    if (grade > LOWEST_GRADE)
        throw GradeTooHighException();
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
    return "Grade Too High !\n";
}

const char* Bureaucrat::GradeTooLowException::what()  const throw()
{
   return "Grade Too Low !\n";
}

const std::string Bureaucrat::getName(void) const
{
    return (this->_Name);
}

int Bureaucrat::getGrade(void) const
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

void Bureaucrat::signForm(AForm& f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->_Name << " Signed " << f.get_Name() << std::endl;
    }
    catch (AForm::GradeTooLowException& e)
    {
        std::cout << this->_Name << " couldn’t sign " << f.get_Name() << " because " << e.what();
    }
}

void Bureaucrat::executeForm(AForm const & form) const
{
    if (form.getGradeToExecute() < HIGHEST_GRADE)
        throw GradeTooLowException();
    if (form.getGradeToExecute() > LOWEST_GRADE)
        throw GradeTooHighException();
    std::cout << this->getName() <<  " executed " <<  form.get_Name() << std::endl;
}


