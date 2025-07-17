/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:32:33 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/13 16:36:40 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Form"), is_signed(false), gradeToSign(15), gradeToExecute(20) {}

Form::Form(std::string Nname, const int NgradeToSign, const int NgradeToExecute): _name(Nname)
	, gradeToSign(NgradeToSign), gradeToExecute(NgradeToExecute)
{
	is_signed = false;
	if (this->gradeToSign < 1)
	{
		throw Form::GradeTooHighException();
	}
    if (this->gradeToSign > 150)
    {
		throw Form::GradeTooLowException();
	}
	if (this->gradeToExecute < 1)
    {
		throw Form::GradeTooHighException();
	}
    if (this->gradeToExecute > 150)
    {
		throw Form::GradeTooLowException();
	}
}

Form::Form(const Form& Nform): _name(Nform._name), gradeToSign(Nform.gradeToSign), gradeToExecute(Nform.gradeToExecute)
{
	this->is_signed = Nform.is_signed;
}

Form::~Form(){}

Form& Form::operator=(const Form& Nform)
{
	this->is_signed = Nform.is_signed;
	return *this;
}

const char* Form::GradeTooHighException::what()  const throw()
{
    return "Invalid Grade: Too High !";
}

const char* Form::GradeTooLowException::what()  const throw()
{
   return "Invalid Grade: Too Low !";
}

std::string Form::get_Name(void) const
{
	return (this->_name);
}

bool Form::getIs_signed(void) const
{
	return (this->is_signed);	
}

int Form::getGradeToSign(void) const
{
	return (this->gradeToSign);	
}

int Form::getGradeToExecute(void) const
{
	return (this->gradeToExecute);	
}


void Form::beSigned(Bureaucrat& br)
{
	if (br.getGrade() <= this->gradeToSign)
		this->is_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, Form& f)
{
	if (f.getIs_signed())
		out << f.get_Name() << ", Form's grade To Execute " <<
		f.getGradeToExecute() <<
		", Form's grade To Sign " <<
		f.getGradeToSign() <<
		", The Form is signed" << std::endl;
	else
		out << f.get_Name() <<
		", Form's grade To Execute " <<
		f.getGradeToExecute() <<
		", Form's grade To Sighn " <<
		f.getGradeToSign() <<
		", The Form is not signed" << std::endl;
	return (out);
}
