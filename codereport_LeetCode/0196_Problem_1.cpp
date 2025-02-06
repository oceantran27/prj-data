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
// Problem Link (Practice): https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/

bool canMakeArithmeticProgression(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    vector v(arr.size(), 0);
    adjacent_difference(arr.begin(), arr.end(), v.begin());
    return all_of(v.begin() + 1, v.end(), [f = v.begin() + 1](auto c) { return c == *f; });
}
