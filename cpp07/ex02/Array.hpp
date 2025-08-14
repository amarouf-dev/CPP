/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdellah <abdellah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:06:45 by amarouf           #+#    #+#             */
/*   Updated: 2025/08/14 15:31:32 by abdellah         ###   ########.fr       */
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
	unsigned int size;

	public:
	Array(): data(), size(1) {}
	Array(unsigned int n): data(new T[n]), size(n) {}
	
	Array& operator=(Array& arr)
	{
		delete[] this.data;
		
		this->size = arr.size;
		this->data = new T[arr.size];
		
		for (int i = 0; i < arr.size; i ++)
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
		if (index >= size)
		{
			throw std::out_of_range;
		}
		else
			return (data[index]);
	}
	int size()
	{
		return (size);
	}
};

#endif