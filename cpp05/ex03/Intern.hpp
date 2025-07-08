/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 08:18:22 by amarouf           #+#    #+#             */
/*   Updated: 2025/07/08 08:24:43 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN
#define INTERN

#include <iostream>

class Intern
{
    Intern();
    Intern(Intern&);

    Intern& operator=(Intern&);

    ~Intern();

    void makeForm(std::string&, std::string&);
};

#endif