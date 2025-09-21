/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikhanenk <ikhanenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:22:30 by ikhanenk          #+#    #+#             */
/*   Updated: 2025/07/31 20:09:39 by ikhanenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>
#include <cstdlib>


// #define MAX_VAL 750
#define MAX_VAL 5

int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;



    std::cout << "\n--------------- TEST 1 ---------------\n" << std::endl;
    {
        std::cout << "arrStr_1 (std::string)\n" << std::endl;
        Array<std::string> arrStr_1(4);
        std::cout << "size: " << arrStr_1.size() << std::endl;
        std::cout << "\n--------------------------------------\n" << std::endl;
        std::cout << "arrStr_2 (std::string)\n" << std::endl;
        Array<std::string> arrStr_2 = arrStr_1;
        std::cout << "\n--------------------------------------\n" << std::endl;
        
        size_t idx = 1;
        size_t idx1 = 10;
        std::cout << "arrStr_3 (std::string)\n" << std::endl;
        Array<std::string> arrStr_3(3);
        try
        {
            std::cout << "\nPrint elements: \n";
            arrStr_3[idx] = "str"; 
            arrStr_3.operator[](idx) = "blablabla";
            std::cout << "el[" << idx << "] : " << arrStr_3.operator[](idx) << std::endl;
            std::cout << "el[" << idx1 << "] : " << arrStr_3.operator[](idx1) << std::endl;
        }
        catch(Array<std::string>::TooHighException& e)
        {
            std::cerr << e.what() << '\n';
        }
        std::cout << std::endl;

        arrStr_3.operator=(arrStr_2);
        
        std::cout << "\n--------------------------------------\n" << std::endl;
    }
    std::cout << "\n--------------- TEST 2 ---------------\n" << std::endl;
    {
        std::cout << "Array (float)\n" << std::endl;
        Array<float> arr(6);
    
        std::cout << std::endl;
        for (float i = 0; i < 6; ++i)
            arr[i] = i + i / 10;
        try
        {
            std::cout << "\nPrint elements: \n";
            std::cout << "el[" << 3 << "] : " << arr.operator[](3) << std::endl;
            std::cout << "el[" << 10 << "] : " << arr.operator[](10) << std::endl;
        }
        catch(Array<float>::TooHighException& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << "\n--------------------------------------\n" << std::endl;

    return 0;
}
