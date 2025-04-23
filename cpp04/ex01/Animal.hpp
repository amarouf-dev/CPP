/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:08:55 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/23 16:59:20 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// #include "Brain.hpp"
// #include "Cat.hpp"
// #include "Dog.hpp"
#include <iostream>

class Animal
{
    protected:
    std::string type;

    public:
        Animal();
        Animal(std::string);
        Animal(const Animal&);
        Animal& operator=(const Animal&);
        virtual ~Animal();
        virtual void makeSound() const;
        std::string getType() const;
};
