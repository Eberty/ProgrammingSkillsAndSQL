/*
 * Copyright 2021 Eberty Alves
 *
 * 3. Develop a C/C++ or Java language program that implements and uses the ConcatRemove(s, t, k) function. It should
 * return the results 'yes' or 'no'. The function has the following parameters: s: starting string t: desired string k:
 * an integer that represents the number of operations.
 *
 * How to compile and run:
 *   g++ 3.cpp -o ConcatRemove
 *   ./ConcatRemove
 */

#include <bits/stdc++.h>

std::string ConcatRemove(const std::string& s, const std::string& t, const int k) {
  int max_size = s.size() + t.size();
  if (max_size <= k) {
    return "yes";
  }

  int common = 0;
  int str_min = std::min(s.size(), t.size());
  while ((common < str_min) && (s[common] == t[common])) {
    common++;
  }

  if ((max_size <= 2 * common + k) && ((max_size - k) % 2 == 0)) {
    return "yes";
  }

  return "no";
}

int main(int argc, char** argv) {
  std::string s, t;
  int k;
  std::cin >> s >> t >> k;

  std::cout << ConcatRemove(s, t, k) << std::endl;

  return 0;
}
