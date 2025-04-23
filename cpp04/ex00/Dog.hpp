/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:20:08 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/23 09:46:46 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
    public:
        Dog();
        Dog& operator=(const Dog& );
        Dog(const Dog&);
        ~Dog();
        void makeSound() const;
};
