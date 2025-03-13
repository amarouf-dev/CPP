/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:17 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/11 21:34:11 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact Contacts[8];
        int     index;
    public:
        PhoneBook();
        void setContact(Contact Contacts[8]);
        Contact *getContact(void);
        int getIndex(void);
        bool add_contact(void);
        bool print_contact_info(void);
        bool contact_prompt(Contact *Contacts);
};

void    fix_print(std::string str);
bool    pars_number(std::string nbr);
