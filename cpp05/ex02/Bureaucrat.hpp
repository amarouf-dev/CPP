/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:00 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/08 01:35:32 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"


#define LOWEST_GRADE 150
#define HIGHEST_GRADE 1

class AForm;

class Bureaucrat
{
	private:
	const std::string _Name;
	int                _Grade;

	public:
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what()  const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what()  const throw();
	};
	
	Bureaucrat();
	Bureaucrat(std::string, int);
	Bureaucrat(const Bureaucrat&);

	~Bureaucrat();
	
	Bureaucrat& operator=(const Bureaucrat&);
	
	const std::string   getName(void) const;
	int                 getGrade(void) const;

	void    GradeIncrement(int);
	void    GradeDecrement(int);

	void signForm(AForm&);

	void executeForm(AForm const & form) const;
};

std::ostream& operator<< (std::ostream&, Bureaucrat&);

#endif