#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() <= 2) return;
        for (int i = 1; i < nums.size()-1; i++) {
            int tmp;
            tmp = nums[i];
            nums[i] = nums[i+1];
            nums[i+1] = tmp;
            i++;
        }
    }
};