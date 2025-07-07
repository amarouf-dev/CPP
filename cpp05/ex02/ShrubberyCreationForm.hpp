/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 02:31:04 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/07 23:38:16 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCForm
#define SCForm

#define RequiredSighn 145
#define RequireExec 137

#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
    std::string target;

    public:

    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string&);
    ShrubberyCreationForm(ShrubberyCreationForm&);


    ShrubberyCreationForm& operator=(ShrubberyCreationForm&);

    ~ShrubberyCreationForm();

    void doExecute() const;
};

#endif
