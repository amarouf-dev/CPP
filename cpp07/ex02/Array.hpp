/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarouf <amarouf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:06:45 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/31 19:55:32 by amarouf          ###   ########.fr       */
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
	Array(): data(new T[0]), _size(0) {}
	Array(unsigned int n): data(new T[n]), _size(n) {}
	
	Array& operator=(Array& arr)
	{
		if (this != &arr)
		{
			delete[] this->data;
			this->_size = arr._size;
			this->data = new T[arr._size];
			for (unsigned int i = 0; i < arr._size; i ++)
			{
				this->data[i] = arr.data[i];
			}
		}
		return (*this);
	}
	Array(Array& arr)
	{
		this->_size = arr._size;
		this->data = new T[arr._size];
		for (unsigned int i = 0; i < arr._size; i ++)
		{
			this->data[i] = arr.data[i];
		}
	}
	~Array()
	{
		delete[] data;
	}

	T& operator[](unsigned int index)
	{
		if (index >= _size)
		{
			throw std::out_of_range("Out of range !");
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