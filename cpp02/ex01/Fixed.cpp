/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:02:52 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/16 21:34:32 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed(): f_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int nbr): f_point (nbr * 256)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float nbr): f_point ((int)roundf(nbr * 256))
{
    std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed& other_fixed)
{
	std::cout << "Copy constructor called\n";
	*this = other_fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator= (const Fixed& NewFixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &NewFixed)
		f_point = NewFixed.f_point;
	return *this;
}

std::ostream& operator<< (std::ostream& out , const Fixed& NewFixed)
{
    out << NewFixed.toFloat();
    return (out);
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

float Fixed::toFloat( void ) const
{
    return (f_point / 256.0);
}

int Fixed::toInt( void ) const
{
    return (f_point / 256);
}
