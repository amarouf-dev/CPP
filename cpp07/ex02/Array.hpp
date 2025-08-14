/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah <abdellah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:06:45 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/14 15:59:25 by abdellah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY__
#define ARRAY__

#include <iostream>

template <typename T>
class Array
{
	private:

	T			*data;
	unsigned int _size;

	public:
	Array(): data(), _size(1) {}
	Array(unsigned int n): data(new T[n]), _size(n) {}
	
	Array& operator=(Array& arr)
	{
		delete[] this.data;
		
		this->_size = arr._size;
		this->data = new T[arr._size];
		
		for (int i = 0; i < arr._size; i ++)
		{
			this->data[i] = arr.data[i];
		}
	}
	Array(Array& arr)
	{
		this = &arr;
	}
	~Array()
	{
		delete[] data;
	}

	T& operator[](unsigned int index)
	{
		if (index >= _size)
		{
			throw std::out_of_range();
		}
		else
			return (data[index]);
	}
	unsigned int size()
	{
		return (_size);
	}
};

#endif