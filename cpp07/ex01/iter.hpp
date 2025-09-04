/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:35:50 by amarouf           #+#    #+#             */
/*   Updated: 2025/09/04 16:54:37 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER
#define ITER

#include <iostream>

template <typename T>
void iter(T s[], int size, void (*f)(T&))
{
    for (int i = 0; i < size; i ++)
    {
        f(s[i]);
    }
}

template <typename T>
void iter(T s[], int size, void (*f)(const T&))
{
    for (int i = 0; i < size; i ++)
    {
        f(s[i]);
    }
}

#endif