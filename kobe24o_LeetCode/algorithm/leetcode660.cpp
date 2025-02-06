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
    int newInteger(int n) {
    	vector<int> nums;
    	while(n)
    	{
    		nums.push_back(n%9);
    		n /= 9;
    	}
    	int ans = 0;
    	for(int i = nums.size()-1; i >= 0; --i)
    		ans = ans * 10 + nums[i];
    	return ans;
    }
};