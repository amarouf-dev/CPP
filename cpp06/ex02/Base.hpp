/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:47:44 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/12 17:01:48 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include <stdlib.h>

class Base
{
    public:
    virtual ~Base();
};

class A : public Base
{
    public:
    A();
};

class B : public Base
{
    public:
    B();
};

class C : public Base
{
    public:
    C();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
