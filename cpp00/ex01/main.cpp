/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:16:12 by amarouf           #+#    #+#             */
/*   Updated: 2025/03/21 19:49:32 by amarouf          ###   ########.fr       */
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
        if (buffer == "ADD")
            phone.setContact();
        else if (buffer == "SEARCH")
            phone.SearchContact();
        else if (buffer == "EXIT")
            return false;
    }
    return (true);
}

int main ()
{
    return(display_menu());
}
