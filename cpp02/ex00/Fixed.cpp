/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:02:52 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/17 12:59:58 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed(): f_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& other_fixed)
{
	std::cout << "Copy constructor called\n";
	f_point = other_fixed.getRawBits();
}

Fixed& Fixed::operator= (const Fixed& NewFixed)
{
	std::cout << "Copy assignment operator called\n";

	if (this != &NewFixed)
		f_point = NewFixed.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (f_point);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	f_point = raw;
}
