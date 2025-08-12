/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:16:26 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/11 21:45:33 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct Data
{
    int age;
    std::string name;
    Data();
    Data(int, std::string);
    Data& operator=(Data&);
}   Data;
