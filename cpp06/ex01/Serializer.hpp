/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:58:37 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/28 17:27:59 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER__
#define SERIALIZER__

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
    private:
    Serializer();

    public:
    Serializer(Serializer&);
    Serializer& operator=(Serializer&);

    ~Serializer();

    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
};

#endif
