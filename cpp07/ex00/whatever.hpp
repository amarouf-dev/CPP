/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:16:18 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/13 15:31:02 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER
#define WHATEVER

#include <iostream>


template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T& min(T &a, T &b)
{
    if (a == b)
        return (b);
    else if (a < b)
        return (a);
    else
        return (b);
}

template <typename T>
T& max(T &a, T &b)
{
    if (a == b)
        return (b);
    else if (a > b)
        return (a);
    else
        return (b);
}

#endif