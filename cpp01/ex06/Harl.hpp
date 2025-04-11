/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:09:08 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/11 10:54:45 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP

#include <iostream>

class Harl
{
	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
    int  harlFilter(std::string level);
	public:
	void complain( std::string level );
};

#endif