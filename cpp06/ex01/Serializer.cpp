/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:12:04 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/11 21:14:29 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"


Serializer::Serializer() {}

Serializer::Serializer(Serializer& serializer) {}

Serializer& Serializer::operator=(Serializer&)
{
    return (*this);
}

Serializer::~Serializer() {}


uintptr_t serialize(Data* ptr)
{
    
}

Data* deserialize(uintptr_t raw)
{
    
}

