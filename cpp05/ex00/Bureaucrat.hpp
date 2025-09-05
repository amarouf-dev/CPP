/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 15:53:00 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/25 17:44:13 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAU__
#define BUREAU__

#include <iostream>

#define LOWEST_GRADE 150
#define HIGHEST_GRADE 1

class Bureaucrat
{
private:
    const std::string _Name;
    int _Grade;

public:
    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    Bureaucrat();
    Bureaucrat(std::string, int);
    Bureaucrat(const Bureaucrat &);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &);

    const std::string getName(void);
    int getGrade(void);

    void GradeIncrement(int);
    void GradeDecrement(int);
};

std::ostream &operator<<(std::ostream &, Bureaucrat &);

#endif
