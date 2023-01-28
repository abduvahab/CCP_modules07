/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:31:22 by areheman          #+#    #+#             */
/*   Updated: 2023/01/18 12:53:36 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	std::cout<<"###test1###"<<std::endl;
	int a[3]={1, 2, 3};
	iter(a, 3, my_print);

	std::cout<<"###test2###"<<std::endl;
	char c[4]= {'a', 'b', 'c', 'e'};
	iter(c, 4, my_print);


	std::cout<<"###test3###"<<std::endl;
	std::string s[3]={"as", "bs", "cs"};
	iter(s, 3, my_print);

	std::cout<<"###test3###"<<std::endl;
	std::string tem = "hello";
	const char *d = tem.c_str();
	iter(d, strlen(d), my_print);

	return 0;
}
