#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    int minPairSum(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0, j = nums.size() - 1; i < j; i++, j--) {
            ans = max(ans, nums[i] + nums[j]);
        }
        return ans;
    }
};
