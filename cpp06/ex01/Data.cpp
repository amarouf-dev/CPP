/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:36:10 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/11 21:46:01 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(): age(18), name("Default_name") {}

Data::Data(int nage, std::string nname): age(nage), name(nname){}


Data& Data::operator=(Data& D)
{
    if (this != &D)
    {
        this->age = D.age;
        this->name = D.name;
    }
    return (*this);
}
