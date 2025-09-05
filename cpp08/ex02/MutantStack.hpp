/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:55:36 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/25 18:02:00 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_
#define MUTANT_

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    private:
    
    

    public:

    MutantStack();  
    MutantStack(MutantStack&);
    MutantStack& operator=(MutantStack&);
    ~MutantStack();
};

#endif