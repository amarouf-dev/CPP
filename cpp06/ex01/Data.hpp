/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 15:19:44 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/25 18:36:14 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D_ATA___
#define D_ATA___

#include <iostream>

typedef struct Data
{
    int age;
    std::string name;

    Data();
    Data(int, std::string);
    Data& operator=(Data&);
}   Data;

#endif
