#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

#include <vector>
#include <ranges>

// Solution
auto getFinalState(std::vector<int> nums, int k, int m) {
    while (k--) {
        auto i = std::ranges::min_element(nums);
        *i *= m;
    }
    return nums;
}

// Small refactor
auto getFinalState(std::vector<int> nums, int k, int m) {
    while (k--)
        *std::ranges::min_element(nums) *= m;
    return nums;
}
