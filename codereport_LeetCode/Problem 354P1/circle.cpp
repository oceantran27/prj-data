#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Problem Link: https://leetcode.com/problems/sum-of-squares-of-special-elements/
// Compiler Explorer: https://godbolt.org/z/7aEfzhEPE

auto sum_of_squares(std::vector<int> nums) -> int32_t {
    return nums
        |> enumerate($)
        |> filter($, _bbb(_eq(0), _mod(nums.size()), _plus(1), _fst))
        |> transform($, _b(_w(_mul_), _snd)) 
        |> ranges::fold_left($, 0, std::plus{});
}

// Tests
auto main() -> int {
    fmt::println("{}", sum_of_squares(std::vector{1, 2, 3, 4})); // 21
    fmt::println("{}", sum_of_squares(std::vector{2, 7, 1, 19, 18, 3})); // 63
}
