/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:32:39 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/23 17:49:08 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "Animal.hpp"

int main()
{
    const Animal* j = new Dog();
    std::cout << "|||||||||||||||||||||||||||||||||" << std::endl;
    const Animal* i = new Cat();
    std::cout << "|||||||||||||||||||||||||||||||||" << std::endl;
    const Animal obj;
    std::cout << "|||||||||||||||||ssssss||||||||||||||||" << std::endl;
    delete j;
    delete i;
    return 0;
}
