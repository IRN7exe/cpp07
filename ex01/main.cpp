/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhanenk <ikhanenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 17:49:48 by ikhanenk          #+#    #+#             */
/*   Updated: 2025/07/31 20:13:57 by ikhanenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

template <typename T, typename Func_ptr> void iter(T* ptr, const size_t size, Func_ptr func);

void printW(const std::string& w) {std::cout << w << "\t";}

void addNum(int num) {std::cout << num + 3 << "\t";}

void addStr(char arr) {std::cout << "<" << arr << ">\t";}

int main(void)
{
	int arrInt[] = {0, 1, 3, 5, 7, 9, 11, 13, 15};
	char arrChar[] = {'a', 'b', 'c'};
	const char arrCharConst[] = {'x', 'y', 'z'};
	std::string arrName[] = {"Kate", "Mike", "Boby", "Andrew"};

	std::cout << "\nResult: " << std::endl;
	iter(arrInt, sizeof(arrInt)/sizeof(arrInt[0]), &addNum);
	
	std::cout << "\nResult: " << std::endl;
	iter(arrChar, sizeof(arrChar)/sizeof(arrChar[0]), &addStr);
	
	std::cout << "\nResult: " << std::endl;
	iter(arrCharConst, sizeof(arrCharConst)/sizeof(arrCharConst[0]), addStr);
	
	std::cout << "\nResult: " << std::endl;
	iter(arrName, sizeof(arrName)/sizeof(arrName[0]), &printW);
	std::cout << std::endl;
	return 0;
}