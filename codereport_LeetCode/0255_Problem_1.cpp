#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Problem Link: https://leetcode.com/contest/weekly-contest-255/problems/find-greatest-common-divisor-of-array/
// Godbolt: https://godbolt.org/z/zK4zexfza

// C++17
int find_gcd(std::vector<int> const& nums) {
    auto const [a, b] = std::minmax_element(nums.cbegin(), nums.cend());
    return std::gcd(*a, *b);
}

// C++20
int find_gcd(std::vector<int> const& nums) {
    auto const r = std::ranges::minmax_element(nums);
    return std::gcd(*r.min, *r.max);
}
