#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Problem Link: https://leetcode.com/problems/first-missing-positive/
// Godbolt Link: https://godbolt.org/z/61rdxh5sh

auto find_missing_positive(std::vector<int> vec) -> int {
    auto i = std::partition(vec.begin(), vec.end(), 
        [n = vec.size()](auto e) { return 0 < e and e <= n; });
    std::sort(vec.begin(), i);
    return *std::ranges::mismatch(vec, std::views::iota(1)).in2;
}

// Alternate
auto find_missing_positive(std::vector<int> vec) -> int {
    auto r = std::ranges::partition(vec, 
        [n = vec.size()](auto e) { return 0 < e and e <= n; });
    std::sort(vec.begin(), std::ranges::begin(r));
    return *std::ranges::mismatch(vec, std::views::iota(1)).in2;
}
