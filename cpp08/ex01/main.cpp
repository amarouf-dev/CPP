/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:39:23 by abdellah          #+#    #+#             */
/*   Updated: 2025/08/18 11:32:36 by amarouf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <time.h>


int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}


// int main ()
// {
	
// 	try
// 	{
// 		int n;
// 		std::srand(time(0));
// 		Span s(20000);
// 		for (int i = 0; i < 20000; i ++)
// 		{
// 			n = random();
// 			s.addNumber(n);
// 		}
// 		std::cout << s.longestSpan() << std::endl;
// 		std::cout << s.shortestSpan() << std::endl;
// 		// std::cout << s.geTV()[0] << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
// }