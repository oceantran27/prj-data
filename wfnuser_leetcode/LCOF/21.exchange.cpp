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
    vector<int> exchange(vector<int>& nums) {

        if (nums.size() <= 1) return nums;

        int n = nums.size();
        int left = 0;
        int right = n-1;

        while(left < right) {
            if (left<right && nums[left] % 2 == 1) left++;
            if (left<right && nums[right] % 2 == 0) right--;
            int tmp = nums[left];
            nums[left] = nums[right];
            nums[right] = tmp;
        }

        return nums;
    }
};