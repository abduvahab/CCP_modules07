/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:10:15 by areheman          #+#    #+#             */
/*   Updated: 2023/01/18 11:06:32 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void	swap(T &a, T &b)
{
	T tem = a;
	a = b;
	b = tem;
}

template <typename T>
T& min(T &a, T &b)
{
	if (a >= b)
		return b;
	return a;
}

template <typename T>
T& max(T &a, T &b)
{
	if (a <= b)
		return b;
	return a;
}


#endif

