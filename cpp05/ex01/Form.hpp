/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:32:36 by amarouf           #+#    #+#             */
/*   Updated: 2025/06/13 02:03:05 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"

class Form  : public Bureaucrat
{
    private:
    
    const std::string name;
    bool is_signed;
    const int gradeToSign;
    const int gradeToExecute;
    public:
    
    // Constractors
    Form();
    Form(std::string&);
    Form(Form&);

    //getters
    
};