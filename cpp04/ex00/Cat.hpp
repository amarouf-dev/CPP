/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:20:08 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/23 09:46:38 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
    public:
        Cat();
        Cat& operator=(const Cat& );
        Cat(const Cat&);
        ~Cat();
        void makeSound() const;
};
