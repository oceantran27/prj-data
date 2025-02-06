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
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
    	unordered_set<int> s;
        for (int i = 0; i < nums.size(); ++i)
        {
        	if(s.find(nums[i]) != s.end())
        		return true;
        	else
        		s.insert(nums[i]);
        	if(s.size() > k)
        		s.erase(nums[i-k]);
        }
        return false;
    }
};