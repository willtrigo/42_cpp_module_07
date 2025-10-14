/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:36:00 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/14 20:20:31 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include <cstddef>

template <typename T>
Array<T>::Array() : m_elements(NULL), m_size(0) {}

template <typename T>
Array<T>::Array(unsigned int num) : m_elements(new T[num]()), m_size(num) {}

template <typename T>
Array<T>::Array(const Array& other) : m_elements(NULL), m_size(0) {
  *this = other;
}

template <typename T>
Array<T>::~Array() {
  delete[] this->m_elements;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
  if (this != &other) {
    delete[] this->m_elements;
    m_size = other.m_size;
    m_elements = new T[other.m_size];
    for (unsigned int i = 0; i < other.m_size; ++i) {
      this->m_elements[i] = other.m_elements[i];
    }
  }
  return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
  if (index >= this->m_size) {
    throw Array<T>::OutOfBoundsException();
  }
  return this->m_elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
  if (index >= this->m_size) {
    throw Array<T>::OutOfBoundsException();
  }
  return this->m_elements[index];
}

template <typename T>
unsigned int Array<T>::size() const {
  return this->m_size;
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw() {
  return "Index is out of bounds";
}

#endif  // ARRAY_TPP
