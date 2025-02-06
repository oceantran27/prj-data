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
    int findRepeatNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(auto& n : nums)
        {
        	if(!s.count(n))
        		s.insert(n);
        	else
        		return n;
        }
        return -1;
    }
};