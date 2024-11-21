/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:17 by amarouf           #+#    #+#             */
/*   Updated: 2024/11/21 12:21:03 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact Contacts[8];
        int index;
    public:
        PhoneBook(): index(0){};
        void add_contact(PhoneBook *phone);
        void search_contact(PhoneBook phone);
};
