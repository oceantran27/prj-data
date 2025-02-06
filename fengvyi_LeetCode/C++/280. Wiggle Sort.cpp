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
        for(int i = 1; i < nums.size(); i++)
            if(i % 2 && nums[i - 1] > nums[i] || !(i % 2) && nums[i - 1] < nums[i]) swap(nums[i], nums[i - 1]);
    }
};
