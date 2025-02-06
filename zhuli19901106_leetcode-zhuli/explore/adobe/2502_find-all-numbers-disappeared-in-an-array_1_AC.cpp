#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Use the original array for marking.
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        int i;
        for (i = 0; i < n; ++i) {
            nums[nums[i] % (n + 1) - 1] += n + 1;
        }
        vector<int> res;
        for (i = 0; i < n; ++i) {
            if (nums[i] < n + 1) {
                res.push_back(i + 1);
            }
        }
        return res;
    }
};
