/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 16:51:40 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/13 00:39:04 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main ()
{
    {
        Base *b;
    
        b = generate();
        identify(b);
    }

    std::cout << "\n\n\n [Test] \n\n\n";

    {
        A a;
        Base &b = a;
        
        identify(b);
    }

    {
        B a;
        Base &b = a;

        identify(b);
    }

    {
        C s;
        Base &b = s;

        identify(b);
    }
}