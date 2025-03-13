/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:49:24 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/13 00:49:13 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_CPP
#define ZOMBIE_CPP

#include  <iostream>
#include <stdlib.h>

class Zombie
{
    private:
    std::string name;
    public:
    void setName(std::string name);
    std::string getName(void);
    void announce( void );
    ~Zombie();
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );


#endif