/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:58:37 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/11 21:26:12 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
    private:

    public:
    Serializer();
    Serializer(Serializer&);
    Serializer& operator=(Serializer&);

    ~Serializer();

    // Methods
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};
