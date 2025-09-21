/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhanenk <ikhanenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:09:18 by ikhanenk          #+#    #+#             */
/*   Updated: 2025/07/31 20:51:38 by ikhanenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(): size_(0), arr_(NULL) {
	std::cout << "\nDefault ctor" << std::endl;
}

template <typename T>
Array<T>::Array(const unsigned int n): size_(n) {
	std::cout << "\nParams ctor" << std::endl;
	arr_ = new (std::nothrow) T[n]();
	if (!arr_)
	{
		size_ = 0;
		std::cerr << "could not allocate memory!" << std::endl;
	}
	for (size_t i = 0; i < n; ++i)
		std::cout << i << " : '" << arr_[i] << "'" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& rhs): size_(rhs.size_) {
	std::cout << "\nCopy ctor" << std::endl;
	arr_ = new (std::nothrow) T[rhs.size_];
	for (size_t i = 0; i < size(); ++i)
	{
		arr_[i] = rhs.arr_[i];
		std::cout << "copy " << i << " : '" << arr_[i] << "'" << std::endl; 
	}
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs) {
	std::cout << "\nOperator=" << std::endl;
	if (&rhs != this)
	{
		delete [] arr_;
		arr_ = new (std::nothrow) T[rhs.size_];
		for (size_t i = 0; i < rhs.size_; ++i)
		{
			arr_[i] = rhs.arr_[i];
			std::cout << i << " = '" << arr_[i] << "'" << std::endl; 
		}
	}
	size_ = rhs.size_;
	return *this;
}


template <typename T>
Array<T>::~Array() {
	delete [] arr_;
	std::cout << "Dctor" << std::endl;
}

template <typename T>
T& Array<T>::operator[](const std::size_t idx) const {
	if (idx >= size_)
		throw TooHighException("Too big index\n");
	return arr_[idx];
}

template <typename T>
size_t Array<T>::size(void) const  // number of elements
{
	return (size_);
}