/*
 * Copyright 2021 Eberty Alves
 *
 * 10. Make a program in C/C++ or Java language that reverses a string informed by the user without using any temporary
 * variable, buffer or any pre-existing function or method for this.
 *
 * NOTE: I'll assume you're asking to reverse the string and not just show it reversed.
 *
 * How to compile and run:
 *   g++ 10.cpp -o ReverseString
 *   ./ReverseString
 */

#include <bits/stdc++.h>

int main(int argc, char** argv) {
  std::string str;
  std::getline(std::cin, str);

  // std::reverse(str.begin(), str.end());
  // std::cout << str << std::endl;

  // str = std::string(str.rbegin(), str.rend());
  // std::cout << str << std::endl;

  // for (size_t i = str.length() - 1; i >= 0; i--) {
  //   std::cout << str[i];
  // }
  // std::cout << std::endl;

  // for (size_t i = 0; i < str.length() / 2; i++) {
  //   std::swap(str[i], str[str.length() - i - 1]);
  // }
  // std::cout << str << std::endl;

  for (size_t i = 0; i < str.length() / 2; i++) {
    str[i] = str[i] + str[str.length() - i - 1];
    str[str.length() - i - 1] = str[i] - str[str.length() - i - 1];
    str[i] = str[i] - str[str.length() - i - 1];
  }
  std::cout << str << std::endl;

  return 0;
}
