/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:49:01 by abdellah          #+#    #+#             */
/*   Updated: 2025/08/18 11:41:10 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): size(1) {}

Span::Span(unsigned int n): size(n) {}

Span& Span::operator=(const Span& s)
{
    this->size = s.size;
    for (std::vector<int>::const_iterator it = s.v.begin(); it != s.v.end(); it ++)
    {
            this->v.push_back(*it);
    }
    return (*this);
}

Span::Span(const Span& s)
{
    *this = s;
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

int Span::shortestSpan(void)
{
    int i = std::min_element(v.begin(), v.end())[0];
    return (i);
}

int Span::longestSpan(void)
{
    int i = std::max_element(v.begin(), v.end())[0];
    return (i);
}


