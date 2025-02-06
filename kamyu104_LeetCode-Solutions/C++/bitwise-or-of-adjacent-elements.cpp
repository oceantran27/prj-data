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

// array
class Solution {
public:
    vector<int> orArray(vector<int>& nums) {
        vector<int> result(size(nums) - 1);
        for (int i = 0; i + 1 < size(nums); ++i) {
            result[i] = nums[i] | nums[i + 1];
        }
        return result;
    }
};
