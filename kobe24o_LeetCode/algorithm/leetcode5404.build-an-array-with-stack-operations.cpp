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
    vector<string> buildArray(vector<int>& target, int n) {
    	vector<string> ans;
    	for(int i = 0, k = 1; k <= n && i < target.size(); ++k)
    	{
    		ans.push_back("Push");
    		if(target[i] != k)
    			ans.push_back("Pop");
            else
                i++;
    	}
    	return ans;
    }
};