/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:02:52 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/16 08:39:09 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional = 8;

// Constructor /  Destructor

Fixed::Fixed(): f_point(0){}

Fixed::Fixed(const int nbr): f_point(nbr * 256){};

Fixed::Fixed(const float nbr):f_point ((int)roundf(nbr * 256)){};

Fixed::Fixed(const Fixed& other_fixed): f_point(other_fixed.f_point){};

Fixed::~Fixed(){}

// Min / Max

Fixed& Fixed::min( Fixed& F1,  Fixed& F2)
{
	if (F1 < F2)
		return (F1);
	return (F2);
}

const Fixed& Fixed::min(const Fixed& F1, const Fixed& F2)
{
	if (F1 < F2)
		return (F1);
	return (F2);
}

Fixed& Fixed::max( Fixed& F1,  Fixed& F2)
{
	if (F1 > F2)
		return (F1);
	return (F2);	
}

const Fixed& Fixed::max(const Fixed& F1, const Fixed& F2)
{
	if (F1 > F2)
		return (F1);
	return (F2);
}

// Operators

std::ostream& operator<< (std::ostream& out , const Fixed& NewFixed)
{
    out << NewFixed.toFloat();
    return (out);
}

Fixed& Fixed::operator= (const Fixed& NewFixed)
{

	if (this != &NewFixed)
		f_point = NewFixed.f_point;
	return *this;
}

bool Fixed::operator> (const Fixed &cls1) const
{
	return (this->f_point > cls1.getRawBits());
}

bool Fixed::operator< (const Fixed &cls1) const
{
	return (this->f_point < cls1.getRawBits());
}

bool Fixed::operator>= (const Fixed &cls1) const
{
	return (this->f_point >= cls1.getRawBits());
}

bool Fixed::operator<= (const Fixed &cls1) const
{
	return (this->f_point <= cls1.getRawBits());
}

bool Fixed::operator== (const Fixed &cls1) const
{
	return (this->f_point == cls1.getRawBits());
}

bool Fixed::operator!= (const Fixed &cls1) const
{
	return (this->f_point != cls1.getRawBits());
}

Fixed Fixed::operator+ (const Fixed &cls1) const
{
	Fixed tmp = *this;
	tmp.f_point += cls1.f_point;
	return (tmp);
}

Fixed Fixed::operator- (const Fixed &cls1) const
{
	Fixed tmp = *this;
	tmp.f_point -= cls1.f_point;
	return (tmp);
}

Fixed Fixed::operator* (const Fixed &cls1) const
{
	Fixed tmp = *this;
	tmp.f_point *= cls1.toFloat();

	return (tmp);
}

Fixed Fixed::operator/ (const Fixed &cls1) const
{
	Fixed tmp = *this;
	tmp.f_point /= cls1.f_point;
	return (tmp);
}


Fixed& Fixed::operator++ ()
{
	Fixed &tmp = *this;
	f_point ++;
	return (tmp);
}

Fixed Fixed::operator++ (int)
{
	f_point ++;
	return (*this);
}

Fixed& Fixed::operator-- ()
{
	Fixed &tmp = *this;
	f_point --;
	return (tmp);
}

Fixed Fixed::operator-- (int)
{
	f_point --;
	return (*this);
}

// Setters / Getters

int Fixed::getRawBits( void ) const
{
	return (f_point);
}

void Fixed::setRawBits( int const raw )
{
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
