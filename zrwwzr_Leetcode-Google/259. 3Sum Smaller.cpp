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
    int threeSumSmaller(vector<int>& nums, int target) {
        int cnt = 0;
        if(nums.empty()) return cnt;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i){
            int left = i + 1, right = nums.size()- 1;
            while(left < right){
                if(nums[i] + nums[left] + nums[right] < target){
                    cnt += right - left;
                    left++;
                }else{
                    right--;
                }
            }
        }
        return cnt;
    }
};
