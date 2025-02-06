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
// Space: O(1)

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int result = 0, prev = 0;
        for (const auto& curr : nums) {
            if (prev < curr) {
                prev = curr;
                continue;
            }
            result += (++prev) - curr;
        }
        return result;
    }
};
