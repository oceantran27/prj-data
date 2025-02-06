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

// sort, greedy
class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(rbegin(nums), rend(nums));
        int i = 0;
        for (int64_t curr = 0; i < size(nums); ++i) {
            curr += nums[i];
            if (curr <= 0) {
                break;
            }
        }
        return i;
    }
};
