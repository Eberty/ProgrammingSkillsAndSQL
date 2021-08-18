/*
 * Copyright 2021 Eberty Alves
 *
 * 4. Write an Unit Test using C/C++ or Java for the function ConcatRemove(s,t,k).
 *
 * How to compile and run:
 *   g++ 4.cpp -o ConcatRemoveUnitTest -lgtest -lpthread
 *   ./ConcatRemoveUnitTest
 */

#include <bits/stdc++.h>
#include <gtest/gtest.h>

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

TEST(ConcatRemoveTest, EbertyTests) {
  EXPECT_EQ("yes", ConcatRemove("aaa", "a", 5));
  EXPECT_EQ("yes", ConcatRemove("aaaaaaaaaa", "aaaaa", 7));
  EXPECT_EQ("yes", ConcatRemove("zzzzz", "zzzzzzz", 4));
  EXPECT_EQ("no", ConcatRemove("ab", "bb", 2));
  EXPECT_EQ("no", ConcatRemove("ashley", "ash", 2));
  EXPECT_EQ("no", ConcatRemove("zxcvasdf", "zxcvbsdf", 6));

  EXPECT_NE("yes", ConcatRemove("e", "eb", 2));
  EXPECT_NE("yes", ConcatRemove("abcd", "abcdert", 10));
  EXPECT_NE("no", ConcatRemove("qwerty", "zxcvbn", 100));
  EXPECT_NE("no", ConcatRemove("abcdef", "fedcba", 15));
}

TEST(ConcatRemoveTest, FormExamples) {
  EXPECT_EQ("yes", ConcatRemove("blablablabla", "blablabcde", 8));
  EXPECT_EQ("yes", ConcatRemove("tab", "tab", 7));
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
