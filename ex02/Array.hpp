/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhanenk <ikhanenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:53:47 by ikhanenk          #+#    #+#             */
/*   Updated: 2025/07/31 19:55:00 by ikhanenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include <stdexcept>

template <typename T>
class Array {
	private:
		T *arr_;
		size_t size_; 
	public:
		Array(); 
		Array(const unsigned int n);
		Array(const Array& rhs);
		Array& operator=(const Array& rhs);
		~Array();
	
		T& operator[](const std::size_t idx) const;
		size_t size(void) const;
	public:
		class TooHighException: public std::out_of_range {
			public:
				explicit TooHighException(const char* what_arg): std::out_of_range(what_arg) {}
		};

};

#include "Array.tpp"