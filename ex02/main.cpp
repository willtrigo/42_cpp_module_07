/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 17:35:37 by dande-je          #+#    #+#             */
/*   Updated: 2025/10/14 20:35:01 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

#define MAX_VAL 750

int main(int, char**) {
  Array<int> numbers(MAX_VAL);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++) {
    const int value = rand();
    numbers[i] = value;
    mirror[i] = value;
  }

  {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
  }

  for (int i = 0; i < MAX_VAL; i++) {
    if (mirror[i] != numbers[i]) {
      std::cerr << "didn't save the same value!!" << std::endl;
      return 1;
    }
  }

  try {
    numbers[-2] = 0;
  } catch (const std::exception& e) {
    std::cerr << "Exception caught: " << e.what() << std::endl;
  }

  try {
    numbers[MAX_VAL] = 0;
  } catch (const std::exception& e) {
    std::cerr << "Exception caught: " << e.what() << std::endl;
  }

  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }

  delete[] mirror;

  // Additional tests
  std::cout << "\n=== Additional Tests ===" << std::endl;

  std::cout << "Testing empty array:" << std::endl;
  Array<int> empty;
  std::cout << "Empty array size: " << empty.size() << std::endl;

  std::cout << "\nTesting string array:" << std::endl;
  Array<std::string> strings(5);
  strings[0] = "Hello";
  strings[1] = "World";
  strings[2] = "42";
  strings[3] = "School";
  strings[4] = "Templates";

  std::cout << "String array contents:" << std::endl;
  for (unsigned int i = 0; i < strings.size(); i++) {
    std::cout << "strings[" << i << "] = " << strings[i] << std::endl;
  }

  std::cout << "\nTesting copy constructor:" << std::endl;
  Array<std::string> stringsCopy(strings);
  stringsCopy[0] = "Modified by dande-je";
  std::cout << "Original[0]: " << strings[0] << std::endl;
  std::cout << "Copy[0]: " << stringsCopy[0] << std::endl;

  return 0;
}
