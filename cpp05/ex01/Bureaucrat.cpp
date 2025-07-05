/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:21 by amarouf           #+#    #+#             */
/*   Updated: 2025/06/21 02:47:46 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

void Bureaucrat::signForm(Form& f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->_Name << " Signed " << f.get_Name() << std::endl;
    }
    catch (Form::GradeTooLowException& e)
    {
        std::cout << this->_Name << " couldn’t sign " << f.get_Name() << " because " << e.what();
    }
}

