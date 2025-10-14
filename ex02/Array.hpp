/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:35:53 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/14 19:56:07 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array {
 public:
  Array();
  Array(unsigned int num);
  Array(const Array& other);
  ~Array();

  Array& operator=(const Array& other);

  T& operator[](unsigned int index);
  const T& operator[](unsigned int index) const;

  unsigned int size() const;

  class OutOfBoundsException : public std::exception {
   public:
    virtual const char* what() const throw();
  };

private:
  T* m_elements;
  unsigned int m_size;
};

#include "Array.tpp"

#endif  // ARRAY_HPP
