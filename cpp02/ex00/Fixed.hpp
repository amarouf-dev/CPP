/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:02:25 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/16 08:14:46 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	  private:
	  
	  int f_point;
	  static const int fractional;

	  public:
	  
	  Fixed();
	  Fixed(const Fixed& other_fixed);
      Fixed& operator= (const Fixed& NewFixed);
	  ~Fixed();
	  
      int getRawBits( void ) const;
      void setRawBits( int const raw );
};