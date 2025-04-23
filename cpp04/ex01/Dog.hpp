/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:20:08 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/23 16:56:38 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"


class Dog: public Animal
{
    private:
    Brain* Br;

    public:
        Dog();
        Dog& operator=(const Dog& );
        Dog(const Dog&);
        ~Dog();
        void makeSound() const;
};
