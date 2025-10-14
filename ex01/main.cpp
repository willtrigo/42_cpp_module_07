/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:50:59 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/14 17:27:39 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <cstdlib>
#include <iostream>
#include <string>

int main(void) {
  std::cout << "=== Testing with int array ===" << std::endl;
  int intArray[] = {1, 2, 3, 4, 5};
  size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

  std::cout << "Original array: ";
  ::iter(intArray, intArraySize, ::printElement<int>);
  std::cout << std::endl;

  ::iter(intArray, intArraySize, ::incrementElement<int>);
  std::cout << "After increment: ";
  ::iter(intArray, intArraySize, ::printElement<int>);
  std::cout << std::endl << std::endl;

  std::cout << "=== Testing with string array ===" << std::endl;
  std::string strArray[] = {"Hello", "World", "42", "School"};
  size_t strArraySize = sizeof(strArray) / sizeof(strArray[0]);

  std::cout << "String array: ";
  ::iter(strArray, strArraySize, ::printElement<std::string>);
  std::cout << std::endl << std::endl;

  std::cout << "=== Testing with double array ===" << std::endl;
  double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  size_t doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);

  std::cout << "Double array: ";
  ::iter(doubleArray, doubleArraySize, ::printElement<double>);
  std::cout << std::endl;

  return EXIT_SUCCESS;
}
