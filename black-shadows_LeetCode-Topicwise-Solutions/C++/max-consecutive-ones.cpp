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
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = 0, local_max = 0;
        for (const auto& n : nums) {
            local_max = n ? local_max + 1 : 0;
            result = max(result, local_max);
        }
        return result;
    }
};
