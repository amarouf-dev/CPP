/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 02:31:04 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/07 03:31:13 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

    void execute(Bureaucrat const & executor) const;
};
