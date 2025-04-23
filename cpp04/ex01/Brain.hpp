/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:42:57 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/23 16:55:13 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"


class Brain
{
    protected:
    std::string ideas[100];

    public:
        Brain();
        Brain& operator=(const Brain& );
        Brain(const Brain&);
        ~Brain();
};

