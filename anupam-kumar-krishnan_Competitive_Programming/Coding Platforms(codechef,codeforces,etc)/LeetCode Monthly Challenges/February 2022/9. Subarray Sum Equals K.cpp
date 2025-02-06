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
	int subarraySum(vector<int>& nums, int k) {
		int ans = 0, sum = 0;
		unordered_map<int, int> map; map[0] = 1;
		for(int i = 0; i < nums.size(); i++) {
			sum += nums[i];
			ans += map[sum - k];
			map[sum]++;    
		}
		return ans; 
	}
};
