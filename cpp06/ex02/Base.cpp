/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:35:27 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/28 03:57:31 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

Base * generate(void)
{
    int s;
    
    std::srand(time(0));
    s = (rand() % 3) + 1;
    
    switch (s)
    {
        case 1:
            return (new A());
        case 2:
            return (new B());
        default:
            return (new C());
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A *>(p))
    {
        std::cout << "The type of the object is : A\n";
    }
    else if (dynamic_cast<B *>(p))
    {
        std::cout << "The type of the object is : B\n";
    }
    else if (dynamic_cast<C *>(p))
        std::cout << "The type of the object is : C\n";
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "The type of the object is : A\n";
        return ;
    }
    catch (std::exception &e)
    {}
    
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "The type of the object is : B\n";
        return ;
    }
    catch (std::exception &e)
    {}
    
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "The type of the object is : C\n";
        return ;
    }
    catch (std::exception &e)
    {}
}
