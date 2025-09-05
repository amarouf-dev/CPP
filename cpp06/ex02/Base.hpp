/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:47:44 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/28 03:56:39 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE__
#define BASE__

#include <iostream>
#include <time.h>
#include <stdlib.h>

class Base
{
    public:
    virtual ~Base();
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
