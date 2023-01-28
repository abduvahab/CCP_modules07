/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 11:13:49 by areheman          #+#    #+#             */
/*   Updated: 2023/01/19 13:40:33 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <class T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& obj);
		~Array();
		Array<T>& operator=(const Array<T>& obj);
		T& operator[](unsigned int n);
		unsigned int size();
	
	private:
		T* t;
		unsigned int num;

};

template <class T>
//class Array
Array<T>::Array()
{
	num = 0;
	t = new T[num];
	std::cout<<"default constructor"<<std::endl;
}

template <class T>
Array<T>::Array(unsigned int n)
{
	if (n < 0)
		throw std::exception();
	num = n;
	t = new T[num];
	std::cout<<"constructor with argument n"<<std::endl;
}

template <class T>
Array<T>::~Array()
{
	delete t;
	std::cout<<"destructor"<<std::endl;
}

template <class T>
Array<T>::Array(const Array<T>& obj):t(new T[obj.num]), num(obj.num)
{
	std::cout<<"copy constructor"<<std::endl;
	for(unsigned int i(0); i < obj.num; i++)
		t[i] = obj.t[i];
}

template <class T>
Array<T>& Array<T>::operator=(const Array<T>& obj)
{
	std::cout<<"copy assignement constructor"<<std::endl;
	if (this == &obj)
		return *this;
	num = obj.num;
	delete t;
	t = new T[num];
	for(unsigned int i = 0; i< num; i++)
		t[i] = obj.t[i];
	return *this;
}

template <class T>
T& Array<T>::operator[](unsigned int n)
{
	if (n >= num)
		throw std::exception();
	return t[n];
}

template <class T>
unsigned int Array<T>::size()
{
	return num;
}







#endif
