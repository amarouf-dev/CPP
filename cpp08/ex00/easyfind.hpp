/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah <abdellah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:05:02 by abdellah          #+#    #+#             */
/*   Updated: 2025/08/15 17:35:27 by abdellah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND__
#define EASYFIND__

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void easyfind(T a, int n)
{
    if (std::find(a.begin(), a.end(), n) != a.end())
        std::cout << n << " is found !" << std::endl;
    else
       throw std::runtime_error("Not found !");
}

#endif