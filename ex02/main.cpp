/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:28:44 by areheman          #+#    #+#             */
/*   Updated: 2023/01/19 13:47:51 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define MAX_VAL 750

int main(void)
{	
	std::cout<<"####test1#####"<<std::endl;
	try{
		Array<int> empty;
		std::cout<<"empty: "<<empty.size()<<std::endl;
		empty[0] =5;
		std::cout<<"empty[0]:"<<empty[0]<<std::endl;
	}catch(std::exception& e){
		std::cout<<e.what()<<std::endl;
	}

	std::cout<<"####test2#####"<<std::endl;
	try{
		Array<int> arg(3);
		arg[0] = 1;
		arg[1] = 2;
		arg[2] = 3;
		std::cout<<"arg[0]:"<<arg[0]<<std::endl;
		std::cout<<"arg[1]:"<<arg[1]<<std::endl;
		std::cout<<"arg[2]:"<<arg[2]<<std::endl;
//		std::cout<<"arg[3]:"<<arg[3]<<std::endl;
		std::cout<<"szie:"<<arg.size()<<std::endl;
		Array<int> em;
		em = arg;
		std::cout<<"em[0]:"<<em[0]<<std::endl;
		std::cout<<"em[1]:"<<em[1]<<std::endl;
		std::cout<<"em[2]:"<<em[2]<<std::endl;



	}catch(std::exception& e){
		
		std::cout<<e.what()<<std::endl;
	}

	return 0;

/*
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
    delete [] mirror;//
    return 0;
*/
}
