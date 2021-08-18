/*
 * Copyright 2021 Eberty Alves
 *
 * 9. Make a program in C/C++ or Java language that calculates the length of a string informed by the user (do not use
 * any pre-existing function or method for this, such as len(), count(), strlen() or length());
 *
 * How to compile and run:
 *   g++ 9.cpp -o StringLength
 *   ./StringLength
 */

#include <bits/stdc++.h>

int main(int argc, char** argv) {
  std::string str;
  std::getline(std::cin, str);

  size_t i = 0;
  while (str[i] != '\0') {
    i++;
  }
  std::cout << i << std::endl;

  return 0;
}
