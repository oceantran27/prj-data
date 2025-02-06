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
    int lengthOfLongestSubstring(string s) {
    	if(s.empty())
    		return 0;
    	set<char> set;
    	int i = 0, j = 0, maxlen = 0;
    	for( ; j < s.size(); ++j)
    	{
    		if(!set.count(s[j]))
    		{
    			set.insert(s[j]);
    			maxlen = max(maxlen,j-i+1);
    		}
    		else
    		{
    			while(s[i] != s[j])
    			{
    				set.erase(s[i++]);
    			}
    			i++;
    		}
    	}
    	return maxlen;
    }
};