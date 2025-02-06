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
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i = 0;i < nums.size();i++){
            if(nums[i] == 0)    count++;
            else if(count != 0) nums[i - count] = nums[i];
        }
        
        int end = nums.size() - 1;
        while(count--)
            nums[end--] = 0;
    }
};