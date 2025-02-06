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
        int odd = nums.size()-1, even = 0;
        while(even < odd)
        {
        	while(even < odd && nums[even]%2 != 0)
        		even++;
        	while(even < odd && nums[odd]%2 == 0)
        		odd--;
        	swap(nums[even], nums[odd]);
        }
        return nums;
    }
};