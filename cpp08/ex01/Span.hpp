/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:39:42 by abdellah          #+#    #+#             */
/*   Updated: 2025/08/18 11:32:30 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN__
#define SPAN__

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
    unsigned int size;
    std::vector<int> v;
    
    public:
    Span();  
    Span(unsigned int);
    Span(const Span&);
    Span& operator=(const Span&);
    ~Span();
    void addNumber(int);
    int shortestSpan(void);
    int longestSpan(void);
};


#endif