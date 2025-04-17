/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 09:02:25 by amarouf           #+#    #+#             */
/*   Updated: 2025/04/16 08:21:03 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:

	int f_point;
	static const int fractional;

	public:

	// Constructor /  Destructor
	Fixed();
	Fixed(const int nbr);
	Fixed(const float nbr);
	Fixed(const Fixed& other_fixed);
	Fixed& operator= (const Fixed& NewFixed);
	~Fixed();
	
	// Setters / Getters
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	
	// Operations
	bool operator> (const Fixed &cls1) const;
	bool operator< (const Fixed &cls1) const;
	bool operator>= (const Fixed &cls1) const;
	bool operator<= (const Fixed &cls1) const;
	bool operator== (const Fixed &cls1) const;
	bool operator!= (const Fixed &cls1) const;

	Fixed operator+ (const Fixed &cls1) const;
	Fixed operator- (const Fixed &cls1) const;
	Fixed operator* (const Fixed &cls1) const;
	Fixed operator/ (const Fixed &cls1) const;
	
	Fixed& operator++ ();
	Fixed operator++ (int);
	Fixed& operator-- ();
	Fixed operator-- (int);

	// Min / Max
	static Fixed& min( Fixed& F1,  Fixed& F2);
	static const Fixed& min(const Fixed& F1, const Fixed& F2);
	static Fixed& max( Fixed& F1,  Fixed& F2);
	static const Fixed& max(const Fixed& F1, const Fixed& F2);
};

std::ostream& operator<< (std::ostream& out , const Fixed& NewFixed);
