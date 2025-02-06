#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// code_report Solution
// Problem Link (Contest):  https://leetcode.com/contest/weekly-contest-168/problems/find-numbers-with-even-number-of-digits/
// Problem Link (Practice): https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// Video Solution:          https://youtu.be/gZLZPrgqw2A

// C++11 Solution (bad)

int findNumbers(vector<int>& nums) {
    int res = 0; 
    for (auto e : nums)
        if (to_string(e).size() % 2 == 0)
            res++;
    return res;
}

// C++11 Solution

int findNumbers(vector<int>& nums) {
    return accumulate(nums.cbegin(), nums.cend(), 0,
        [](auto a, auto b) {
            return a + (to_string(b).size() % 2 == 0);
        });
}

// C++20 Solution
// godbolt: https://godbolt.org/z/R_PMTn

auto findNumber(std::vector<int>& nums) {
    return nums
        | rv::transform([](auto e) { return std::to_string(e).size(); })
        | rv::filter([](auto e) { return e % 2 == 0; })
        | hs::length();
}
