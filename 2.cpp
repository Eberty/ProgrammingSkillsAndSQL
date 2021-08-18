/*
 * Copyright 2021 Eberty Alves
 *
 * 2. Write a C/C++ or Java program that prints each number from 1 to 100 on a new line.
 *
 * For each multiple of 3, print "Foo" instead of the number.
 * For each multiple of 5, print "Baa" instead of the number.
 * For multiple numbers simultaneously of 3 and 5, print "FooBaa", instead of the number.
 *
 * Your solution should be using as few lines of code as possible, but you should produce efficient code.
 *
 *
 * NOTE: I'll assume you're asking to print 'Baa', not 'Bar' usually used with 'Foo'.
 *
 * How to compile and run:
 *   g++ 2.cpp -o FooBaa
 *   ./FooBaa
 */

#include <bits/stdc++.h>

int main(int argc, char** argv) {
  for (int i = 1; i < 100; i++) {
    if (i % 15 == 0) {
      std::cout << "FooBaa" << std::endl;
    } else if (i % 3 == 0) {
      std::cout << "Foo" << std::endl;
    } else if (i % 5 == 0) {
      std::cout << "Baa" << std::endl;
    } else {
      std::cout << i << std::endl;
    }
  }

  return 0;
}
