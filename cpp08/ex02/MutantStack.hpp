/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:55:36 by amarouf           #+#    #+#             */
/*   Updated: 2025/09/06 18:53:43 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_
#define MUTANT_

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:

    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::reverse_iterator reverse_iterator;

    iterator begin() {return this->c.begin();}
    iterator end() {return this->c.end();}
    reverse_iterator rbegin() {return this->c.rbegin();}
    reverse_iterator rend() {return this->c.rend();}
};

#endif