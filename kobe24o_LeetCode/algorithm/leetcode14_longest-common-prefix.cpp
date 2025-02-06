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
    string longestCommonPrefix(vector<string>& strs) {
    	if(strs.empty())
    		return "";
        string ans = strs[0];
        int i, j;
        for (i = 1; i < strs.size(); ++i)
        {
        	for(j = 0; j < min(strs[i].size(),ans.size()); ++j)
        	{
        		if(strs[i][j] != ans[j])
        			break;
        	}
        	ans = ans.substr(0,j);
        	if(ans.size() == 0)
        		break;
        }
        return ans;
    }
};