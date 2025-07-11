/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:32:33 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/11 17:59:21 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("AForm"), is_signed(false), gradeToSign(15), gradeToExecute(20) {}

AForm::AForm(std::string Nname, const int NgradeToSign, const int NgradeToExecute): _name(Nname)
	, gradeToSign(NgradeToSign), gradeToExecute(NgradeToExecute)
{
	is_signed = false;
	if (this->gradeToSign < 1)
	{
		throw AForm::GradeTooHighException();
	}
    if (this->gradeToSign > 150)
    {
		throw AForm::GradeTooLowException();
	}
	if (this->gradeToExecute < 1)
    {
		throw AForm::GradeTooHighException();
	}
    if (this->gradeToExecute > 150)
    {
		throw AForm::GradeTooLowException();
	}
}

AForm::AForm(const AForm& NAform): _name(NAform._name), gradeToSign(NAform.gradeToSign), gradeToExecute(NAform.gradeToExecute)
{
	this->is_signed = NAform.is_signed;
}

AForm::~AForm(){}

AForm& AForm::operator=(const AForm& NAform)
{
	this->is_signed = NAform.is_signed;
	return *this;
}

// Exception classes

const char* AForm::GradeTooHighException::what()  const throw()
{
    return "Invalid Grade: Too High !";
}

const char* AForm::GradeTooLowException::what()  const throw()
{
   return "Invalid Grade: Too Low !";
}

const char* AForm::FormNotSigned::what()  const throw()
{
   return "Invalid Grade: Not Signed !";
}

// Getters

std::string AForm::get_Name(void) const
{
	return (this->_name);
}

bool AForm::getIs_signed(void) const
{
	return (this->is_signed);	
}

int AForm::getGradeToSign(void) const
{
	return (this->gradeToSign);	
}

int AForm::getGradeToExecute(void) const
{
	return (this->gradeToExecute);	
}

// Methods

void AForm::beSigned(Bureaucrat& br)
{
	if (br.getGrade() <= this->gradeToSign)
		this->is_signed = true;
	else
		throw AForm::GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!getIs_signed())
			throw AForm::FormNotSigned();
		else if (executor.getGrade() <= getGradeToExecute())
			throw GradeTooHighException();
		else
			doExecute();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

std::ostream& operator<<(std::ostream& out, AForm& f)
{
	if (f.getIs_signed())
		out << f.get_Name() << ", AForm's grade To Execute " <<
		f.getGradeToExecute() <<
		", AForm's grade To Sign " <<
		f.getGradeToSign() <<
		", The AForm is signed" << std::endl;
	else
		out << f.get_Name() <<
		", AForm's grade To Execute " <<
		f.getGradeToExecute() <<
		", AForm's grade To Sighn " <<
		f.getGradeToSign() <<
		", The AForm is not signed" << std::endl;
	return (out);
}
