/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:17 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/11 02:22:22 by amarouf          ###   ########.fr       */
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
        bool add_contact(PhoneBook *phone);
        bool search_contact(PhoneBook phone);
};

void    fix_print(std::string str);
bool    pars_number(std::string nbr);
