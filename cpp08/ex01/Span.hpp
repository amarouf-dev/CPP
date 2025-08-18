/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:39:42 by abdellah          #+#    #+#             */
/*   Updated: 2025/08/18 10:04:00 by amarouf          ###   ########.fr       */
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
    std::vector<int> v;
    
    public:
    Span();  
    Span(unsigned int);
    Span(Span&);
    Span& operator=(Span&);
    ~Span();
    void addNumber(int);
    std::vector<int> geTV(void);
};


#endif