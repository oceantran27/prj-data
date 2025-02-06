#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Problem Link: https://leetcode.com/problems/add-digits/

// Godbolt: https://www.godbolt.org/z/xnjx16

auto sum_digits(int n) -> int {
    return n < 10 ? n : (n % 10) + sum_digits(n / 10);
}

// bad function name, comes from LeetCode problem
auto add_digits(int n) -> int {
    return n < 10 ? n : add_digits(sum_digits(n));
}
