/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:50:57 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/17 20:45:43 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T, typename F>
void iter(T* array, const size_t length, F func) {
  for (size_t i = 0; i < length; ++i) {
    func(array[i]);
  }
}

template <typename T>
void printElement(const T& element) {
  std::cout << element << " ";
}

template <typename T>
void incrementElement(T& element) {
  ++element;
}

#endif
