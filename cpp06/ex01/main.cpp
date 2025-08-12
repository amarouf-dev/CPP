/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:25:19 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/11 21:46:47 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
    Serializer s;
    Data d;
    Data a(20, "wehfwe");

    a = *s.deserialize(s.serialize(&d));
    std::cout << a.age << std::endl;
    std::cout << a.name << std::endl;
}
