/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 18:21:04 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/02 18:27:08 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
    protected:
    std::string type;

    public:
        WrongAnimal();
        WrongAnimal(std::string);
        WrongAnimal(const WrongAnimal&);
        WrongAnimal& operator=(const WrongAnimal&);
        ~WrongAnimal();
        void makeSound() const;
        std::string getType() const;
};