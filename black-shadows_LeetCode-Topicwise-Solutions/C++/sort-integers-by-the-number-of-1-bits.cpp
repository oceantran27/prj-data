#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(1)

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(begin(arr), end(arr),
             [](const auto& a, const auto& b) {
                 return make_pair(__builtin_popcount(a), a) <
                        make_pair(__builtin_popcount(b), b);
             });
        return arr;
    }
};
