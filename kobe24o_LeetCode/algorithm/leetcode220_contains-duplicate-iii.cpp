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
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long> s;
        for(int i = 0; i < nums.size(); ++i)
        {
        	auto it = s.lower_bound(long(nums[i])-long(t));
        	if(it != s.end() && *it <= long(nums[i])+long(t))
        		return true;
        	else
        	{
        		s.insert(nums[i]);
        		if(s.size() > k)
        			s.erase(nums[i-k]);
        	}
        }
        return false;
    }
};