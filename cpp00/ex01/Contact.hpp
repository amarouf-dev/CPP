/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 23:25:12 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/11 01:51:17 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string.h>

class Contact
{
    private:
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string p_number;
    std::string secret;
    int         index;
    public:
    Contact();
    std::string getFname();
    std::string getLname();
    std::string getNname();
    std::string getPnumber();
    std::string getSecret();
    int         getIndex();
    void setFname(std::string set);
    void setLname(std::string set);
    void setNname(std::string set);
    bool setPnumber(std::string set);
    void setSecret(std::string set);
    void setIndex(int new_index);
};

#endif