/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 01:45:31 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/08 02:15:05 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROForm
#define ROForm

#define RRequiredSighn 72
#define RRequireExec 45

#include <fstream>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
    std::string target;

    public:

    RobotomyRequestForm();
    RobotomyRequestForm(std::string&);
    RobotomyRequestForm(RobotomyRequestForm&);


    RobotomyRequestForm& operator=(RobotomyRequestForm&);

    ~RobotomyRequestForm();

    void doExecute() const;
};

#endif