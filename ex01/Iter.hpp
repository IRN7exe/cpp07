/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhanenk <ikhanenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:50:28 by ikhanenk          #+#    #+#             */
/*   Updated: 2025/07/31 20:49:44 by ikhanenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename Func_ptr>
void iter(T* ptr, const size_t size, Func_ptr func)
{
	for(size_t i = 0; i < size; ++i)
		func(ptr[i]);
	std::cout << std::endl;
}

// template <typename Func_ptr>
// void iter(const char* ptr, const size_t size, Func_ptr func)
// {
// 	for(size_t i = 0; i < size; ++i)
// 		func(ptr[i]);
// 	std::cout << "\n--- Partial template specialization ---" << std::endl;
// }