/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah <abdellah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:49:01 by abdellah          #+#    #+#             */
/*   Updated: 2025/08/15 17:52:02 by abdellah         ###   ########.fr       */
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
}

Span::Span(Span& s)
{
    s = *this;
}

