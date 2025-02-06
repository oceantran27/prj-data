#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <iostream>
#include <gtest/gtest.h>
#include <string>
#include "../src/0005-Longest-Palindromic-Substring/0005.cpp"

TEST(test, test1)
{
    std::string s = "babad";
    ASSERT_EQ("bab", Solution().longestPalindrome(s));
}

GTEST_API_ int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
