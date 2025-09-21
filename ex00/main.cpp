/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhanenk <ikhanenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:39:40 by ikhanenk          #+#    #+#             */
/*   Updated: 2025/07/31 20:49:16 by ikhanenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <algorithm>

int main( void ) {
	std::cout << "\n----------------------------------\n" << std::endl;
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
	}
	std::cout << "\n----------------------------------\n" << std::endl;
	{
		std::cout << std::endl;
		std::string a = "a";
		std::string b = "bbbbb";
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::cout << std::endl;
		const char *x = "Hello";
		const char *y = "Bye";
		::swap( x, y );
		std::cout << "a = " << x << ", b = " << y << std::endl;
		std::cout << "min( a, b ) = " << ::min( x, y ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( x, y ) << std::endl;
	}
	std::cout << "\n----------------------------------\n" << std::endl;
	return 0;
}