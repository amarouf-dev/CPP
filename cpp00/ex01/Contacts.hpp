/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 15:44:36 by amarouf           #+#    #+#             */
/*   Updated: 2024-10-23 15:44:36 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

class Contact
{
    public:
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string phone_nbr;
    std::string secret;
    int         index;
};

#endif
