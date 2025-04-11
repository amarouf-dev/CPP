/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:41:30 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/11 11:17:01 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "DEBUG:\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup \
burger. I really do!\n";
}

void Harl::info( void )
{
    std::cout << "INFO:\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon \
in my burger! If you did, I wouldnt be asking for more!\n";
}

void Harl::warning( void )
{
    std::cout << "WARNING:\n";
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for years \
whereas you started working here since last month.\n";
}

void Harl::error( void )
{
    std::cout << "ERROR:\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

int Harl::harlFilter(std::string level)
{
    int i = 0;

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (i < 4)
    {
        if (level == levels[i])
        {
           return (i);
        }
        i ++;
    }
    return (i);
}

void Harl::complain( std::string level )
{
    void (Harl::*lvl_func[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = harlFilter(level);

    switch (i)
    {
        case 0:
            (this->*lvl_func[0])();
        case 1:
            (this->*lvl_func[1])();
        case 2:
            (this->*lvl_func[2])();
        case 3:
            (this->*lvl_func[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
}
