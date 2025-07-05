/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:32:36 by amarouf           #+#    #+#             */
/*   Updated: 2025/06/21 02:47:00 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
    
    const std::string _name;
    bool is_signed;
    const int gradeToSign;
    const int gradeToExecute;

    public:
    
    // Constractors
    Form();
    Form(std::string&, bool&, const int&, const int&);
    Form(const Form&);

    Form& operator=(const Form&);

    ~Form();

    // Exception classes
    
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

    // Getters

    std::string get_Name(void) const;
    bool getIs_signed(void) const;
    int getGradeToSign(void) const;
    int getGradeToExecute(void) const;

    // Methods

    void beSigned(Bureaucrat&);
    
};

std::ostream& operator<<(std::ostream&, Form&);

#endif