/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:32:39 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/13 08:38:28 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "Animal.hpp"

int main()
{
    const Animal *i = new Cat();
    const Animal *d = new Dog();

    const Cat C1;
    std::cout << "\n\n\n\n\n\n";
    const Cat C2(C1);

    Dog basic;
    {
        Dog tmp = basic;
    }

    Cat basicc;
    {
        Cat tmp = basicc;
    }
 
    std::cout << "\n\n\n\n\n";
    i->makeSound();
    d->makeSound();

    C1.makeSound();
    C2.makeSound();
 
    std::cout << "\n\n\n\n\n";
     delete i;
     delete d;
     return 0;
}
