/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arahmoun <arahmoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 03:31:36 by arahmoun          #+#    #+#             */
/*   Updated: 2024/01/22 10:38:28 by arahmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <class T>
const char* Array<T>::OutOfBounds::what() const _NOEXCEPT
{
    return ("the index is out of bounds !");    
}

template <class T>
unsigned int Array<T>::size() const
{
    return size_;
}


template <class T>
T   &Array<T>::operator[](unsigned int index) 
{
    if(index >= size_)
        throw (OutOfBounds());
    return (array[index]);
}


template <class T>
Array<T>::Array(const Array<T> &other)
{
    size_ = other.size();
    this->array = new T[size_]();
    for (size_t i = 0; i < size_; i++)
    {
        this->array[i] = other.array[i];
    }
}


template <class T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
    if (this != &other)
    {
        size_ = other.size();
        delete[] array;
        this->array = new T[size_]();
        for (size_t i = 0; i < size_; i++)
        {
            this->array[i] = other.array[i];
        }
    }
    return (*this); 
}

template <class T>
Array<T>::Array()
{
    size_ = 0;
    array = new T();
}

template <class T>
Array<T>::Array( unsigned int n)
{
    size_ = n;
    array = new T[n]();
}

template <class T>
Array<T>::~Array()
{
    delete[] array;
}

#endif 