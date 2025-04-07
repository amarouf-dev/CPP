/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:16:12 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/07 09:45:21 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int display_menu(void)
{
    PhoneBook phone;
    std::string buffer;

    while (true)
    {
        std::cout << "===============MENU===============\n";
		std::cout << "= OPTIONS:                       =\n";
		std::cout << "= 1- ADD                         =\n";
		std::cout << "= 2- SEARCH                      =\n";
		std::cout << "= 3- EXIT                        =\n";
		std::cout << "==================================\n";
		std::cout << "->Enter a Command: ";
        
        if (!std::getline(std::cin, buffer))
            return (1);
        if (buffer == "ADD" || buffer == "add")
            phone.setContact();
        else if (buffer == "SEARCH" || buffer == "search")
            phone.SearchContact();
        else if (buffer == "EXIT" || buffer == "exit")
            return false;
        else
            std::cout << "\033[1;31mInvalid Command !\n\033[0m";
    }
    return (true);
}

int main ()
{
    return(display_menu());
}
