#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(n)

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> lookup;
        int result = 0;
        for (const auto& num : nums) {
            if (lookup.count(k - num) && lookup[k - num]) {
                --lookup[k - num];
                ++result;
            } else {
                ++lookup[num];
            }
        }
        return result;
    }
};
