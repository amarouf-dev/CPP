/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:32:39 by amarouf           #+#    #+#             */
/*   Updated: 2025/05/02 18:30:12 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
   const Animal *i = new Cat();
   const Animal *d = new Dog();
   const WrongAnimal *j = new WrongCat();

   std::cout << "\n\n\n\n\n";
   i->makeSound();
   j->makeSound();
   d->makeSound();

   std::cout << "\n\n\n\n\n";
    delete i;
    delete j;
    delete d;
    return 0;
}
