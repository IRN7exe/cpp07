/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhanenk <ikhanenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:40:06 by ikhanenk          #+#    #+#             */
/*   Updated: 2025/07/31 20:31:30 by ikhanenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <utility>

template <typename T> 
void swap(T& a, T& b) 
{
	T c(a); a=b; b=c;
}

template <typename T> 
T min(T a, T b) {
	return a < b ? a : b;
}

template <typename T> 
T max(T a, T b) {
	return a >= b ? a : b;
}
