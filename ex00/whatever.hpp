/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:28:06 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/17 20:43:55 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
const T& min(const T& a, const T& b) {
  return (a < b) ? a : b;
}

template <typename T>
const T& max(const T& a, const T& b) {
  return (a > b) ? a : b;
}

#endif  // WHATEVER_HPP
