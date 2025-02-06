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
    int findNumbers(vector<int>& nums) {
        int i, n, ans = 0;
        for(i = 0; i < nums.size(); i++)
        {
        	n = 0;
        	while(nums[i])
        	{
        		n++;
        		nums[i] /= 10;
        	}
        	if((n&1) == 0)
        		ans++;
        }
        return ans;
    }
};