/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:32:39 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/10 22:26:11 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
   const Animal *i = new Cat();
   const Animal *d = new Dog();
   const Animal b;
   const WrongAnimal *j = new WrongCat();
    const WrongCat k;

   std::cout << "\n\n\n\n\n";
   k.makeSound();
   b.makeSound();
   i->makeSound();
   j->makeSound();
   d->makeSound();
   std::cout << "\n\n\n\n\n";

   std::cout << b.getType() << std::endl;
   std::cout << i->getType() << std::endl;
   std::cout << j->getType() << std::endl;
   std::cout << d->getType() << std::endl;

   std::cout << "\n\n\n\n\n";
    delete i;
    delete j;
    delete d;
    return 0;
}
