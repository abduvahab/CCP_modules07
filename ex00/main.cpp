/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:33:36 by areheman          #+#    #+#             */
/*   Updated: 2023/01/18 11:20:10 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
	std::cout<<"#####test1####"<<std::endl;
	int a =5;
	int	b =7;
	char c1 = 'a';
	char c2 = 'b';
	std::cout<<"o_a: "<<a<<std::endl;
	std::cout<<"o_b: "<<b<<std::endl;
	swap(a, b);
	std::cout<<"a: "<<a<<std::endl;
	std::cout<<"b: "<<b<<std::endl;
	std::cout<<"min(a, b): "<<min(a, b)<<std::endl;
	std::cout<<"max(a,b): "<<max(a, b)<<std::endl;

	std::cout<<"#####test2####"<<std::endl;
	std::cout<<"o_c1: "<<c1<<std::endl;
	std::cout<<"o_c2: "<<c2<<std::endl;
	swap(c1, c2);
	std::cout<<"c1: "<<c1<<std::endl;
	std::cout<<"c2: "<<c2<<std::endl;
	std::cout<<"min(c1, c2): "<<min(c1, c2)<<std::endl;
	std::cout<<"max(c1, c2): "<<max(c1, c2)<<std::endl;
	std::cout<<"#####test3####"<<std::endl;
	std::string s1= "test1";
	std::string s2= "test2";
	std::cout<<"o_s1: "<<s1<<std::endl;
	std::cout<<"o_s2: "<<s2<<std::endl;
	swap(s1, s2);
	std::cout<<"s1: "<<s1<<std::endl;
	std::cout<<"s2: "<<s2<<std::endl;
	std::cout<<"min(s1, s2): "<<min(s1, s2)<<std::endl;
	std::cout<<"max(s1, s2): "<<max(s1, s2)<<std::endl;
	return 0;
}
