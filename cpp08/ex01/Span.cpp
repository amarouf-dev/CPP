/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:49:01 by abdellah          #+#    #+#             */
/*   Updated: 2025/08/18 10:08:50 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): size(1) {}

Span::Span(unsigned int n): size(n) {}

Span& Span::operator=(Span& s)
{
    if (this != &s)
    {
        this->size = s.size;
    }
    return (*this);
}

Span::Span(Span& s)
{
    s = *this;
}

Span::~Span(){}

void Span::addNumber(int nbr)
{
    if (size > this->v.size())
    {
        v.push_back(nbr);
    }
    else
    {
        throw std::runtime_error("Error: the number can't be added !");
    }
}

std::vector<int>  Span::geTV(void)
{
    return (v);
}


