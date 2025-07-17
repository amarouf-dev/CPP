/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 02:17:21 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/11 18:10:36 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PCForm
#define PCForm

#define PRequiredSighn 25
#define PRequireExec 5

#include <fstream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
    std::string target;

    public:

    PresidentialPardonForm();
    PresidentialPardonForm(std::string);
    PresidentialPardonForm(PresidentialPardonForm&);


    PresidentialPardonForm& operator=(PresidentialPardonForm&);

    virtual ~PresidentialPardonForm();

    void doExecute() const;
};

#endif