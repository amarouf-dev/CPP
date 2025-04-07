/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:21:27 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/07 09:00:34 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

#include <stdlib.h>

class PhoneBook
{
    private:
        Contact Contacts[8];
        int     nb_contacts;
    public:
        PhoneBook();
        bool setContact(void);
        bool getContact(std::string str, std::string &buf);
        bool SearchContact(void);
        void FixPrint(std::string str);
        bool ContactDisplay(void);
        bool pars_number(std::string nbr);
};

#endif