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
    vector<int> getModifiedArray(int length, vector<vector<int>>& updates) {
    	vector<int> ans(length, 0);
    	for(auto& u : updates)
    	{
    		ans[u[0]] += u[2];
    		if(u[1]+1 < length)
    			ans[u[1]+1] -= u[2];
    	}
    	for(int i = 1; i < length; ++i)
    		ans[i] += ans[i-1];
    	return ans;
    }
};