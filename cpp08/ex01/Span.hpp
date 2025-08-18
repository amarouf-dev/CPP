/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah <abdellah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:39:42 by abdellah          #+#    #+#             */
/*   Updated: 2025/08/15 17:48:23 by abdellah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN__
#define SPAN__

#include <iostream>
#include <vector>

class Span
{
    private:
    unsigned int size;
    
    public:
    Span();  
    Span(unsigned int);
    Span(Span&);
    Span& operator=(Span&);
};


#endif