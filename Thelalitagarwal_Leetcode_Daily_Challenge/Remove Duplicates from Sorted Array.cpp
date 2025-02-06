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
    int removeDuplicates(vector<int>& nums) {
        int index = 1;
        int n=nums.size();
        for(int i = 1; i < n; i++)
            if(nums[i] != nums[i - 1])
                nums[index++] = nums[i];
        
        return index;
    }
};