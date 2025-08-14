/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah <abdellah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:05:02 by abdellah          #+#    #+#             */
/*   Updated: 2025/08/14 16:15:05 by abdellah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

template <typename T>
void easyfind(T a, int n)
{
    if (std::find(a.begin(), a.end(), n) != a.end())
        std::cout << n << " is found !" << std::endl;
    else
        std::runtime_error("Not found !");
}