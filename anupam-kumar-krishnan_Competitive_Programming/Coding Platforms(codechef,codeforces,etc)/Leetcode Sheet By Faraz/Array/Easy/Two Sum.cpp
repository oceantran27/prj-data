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
	vector<int> twoSum(vector<int>& nums, int target) {
		for(int i = 0; i < nums.size(); i++){
			for(int j = i + 1; j < nums.size(); j++){
				if(nums[i] + nums[j] == target){
					return {i, j};
				}
			}            
		}
		return {};
	}
};
