#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Problem Link: https://leetcode.com/contest/biweekly-contest-51/problems/replace-all-digits-with-characters/

// Solution #1
// https://www.godbolt.org/z/frh3c4YY5

auto replace_digits(std::string s) -> std::string {
    for (std::size_t i = 1; i < s.size(); i += 2)
        s[i] = s[i-1] + (s[i] - '0');
    return s;
}

// Solution #2
// https://www.godbolt.org/z/vz9rn8adG

auto replace_digits(std::string s) -> std::string {
    std::partial_sum(s.cbegin(), s.cend(), s.begin(), 
        [](auto p, auto c) { return isalpha(c) ? c : p + (c - '0'); });
    return s;
}

// Solution #3 (this one is the best)
// https://www.godbolt.org/z/z9354MffE

auto replace_digits(std::string s) -> std::string {
    std::adjacent_difference(s.cbegin(), s.cend(), s.begin(), 
        [](auto c, auto p) { return isalpha(c) ? c : p + (c - '0'); });
    return s;
}

// Solution #4

string replaceDigits(string s) {
    auto t = s;
    std::transform(s.cbegin(),s.cend()-1,s.cbegin()+1,t.begin()+1,
        [](auto p,auto c){ return std::isalpha(c) ? c : static_cast<char>(p + (c - '0')); });
}
