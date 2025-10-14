/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:50:57 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/14 17:04:13 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T, typename F>
void iter(T* array, size_t const length, F func) {
  for (size_t i = 0; i < length; ++i) {
    func(array[i]);
  }
}

template <typename T>
void printElement(T const& element) {
  std::cout << element << " ";
}

template <typename T>
void incrementElement(T& element) {
  ++element;
}

#endif
