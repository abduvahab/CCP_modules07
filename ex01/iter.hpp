/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:30:49 by areheman          #+#    #+#             */
/*   Updated: 2023/01/18 12:45:27 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>

void	iter(T t[], int n, void (element(T const&)))
{
	for(int i = 0; i < n; i++)
		element(t[i]);
	std::cout<<std::endl;
}

template <typename T>
void	my_print(T &t)
{
		std::cout<<t<<",";
}


#endif

