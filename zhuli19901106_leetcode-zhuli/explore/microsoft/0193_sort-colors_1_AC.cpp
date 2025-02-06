#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

// https://leetcode.com/explore/interview/card/apple/346/sorting-and-searching/3130/
#include <algorithm>
using std::min;
using std::swap;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int k = n - 1;
        while (i <= j) {
            if (nums[i] == 1) {
                swap(nums[i], nums[j--]);
            } else if (nums[i] == 2) {
                swap(nums[i], nums[k--]);
                j = min(j, k);
            } else {
                ++i;
            }
        }
    }
};
