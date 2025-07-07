/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:32:36 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/05 15:24:08 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
    
    const std::string _name;
    bool is_signed;
    const int gradeToSign;
    const int gradeToExecute;

    public:
    
    // Constractors
    AForm();
    AForm(std::string, const int, const int);
    AForm(const AForm&);

    AForm& operator=(const AForm&);

    ~AForm();

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

    void execute(Bureaucrat const & executor) const;

    virtual void doExecute() const = 0;
    
};

std::ostream& operator<<(std::ostream&, AForm&);

#endif