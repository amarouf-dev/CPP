/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:18:26 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/13 15:34:17 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main( void ) 
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}


// int main ()
// {
// 	// swap
// 	std::cout << "\n[Swap Test] \n";
// 	{
// 		int a = 1;
// 		int b = 2;

// 		swap(a, b);

// 		std::cout << "a value : " << a << std::endl;
// 		std::cout << "b value : " << b << std::endl;
// 	}
// 	{
// 		std::string a = "I'm A";
// 		std::string b = "I'm B";

// 		swap(a, b);

// 		std::cout << "a value : " << a << std::endl;
// 		std::cout << "b value : " << b << std::endl;
// 	}
// 	// Min
// 	std::cout << "\n[Min Test] \n";
// 	{
// 		int a = 1;
// 		int b = 2;

// 		std::cout << min(a, b) << std::endl ;
// 	}
// 	{
// 		std::string a = "I'm A";
// 		std::string b = "I'm B";

// 		std::cout << min(a, b) << std::endl ;
// 	}
// 	// Max
// 	std::cout << "\n[Max Test] \n";
// 	{
// 		int a = 1;
// 		int b = 2;

// 		std::cout << max(a, b) << std::endl ;
// 	}
// 	{
// 		std::string a = "I'm A";
// 		std::string b = "I'm B";

// 		std::cout << max(a, b) << std::endl ;
// 	}
	
// }