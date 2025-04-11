/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:10:10 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/11 10:45:49 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl obj;

    obj.complain("WARNING");
    obj.complain("ERROR");
    obj.complain("INFO");
    obj.complain("DEBUG");
    obj.complain("nothing");
}