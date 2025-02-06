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
    int longestRepeatingSubstring(string S) {
    	int l = 0, r = S.size()-1, len, maxlen;
    	while(l <= r)
    	{
    		len = l+((r-l)>>1);
    		if(haveRepeat(S, len))
    			maxlen = len, l = len+1;
    		else
    			r = len-1;
    	}
    	return maxlen;
    }
    bool haveRepeat(string& S, int len)
    {
    	unordered_set<string> set;
    	string sub;
    	for(int i = 0; i <= S.size()-len; i++)
    	{
    		sub = S.substr(i, len);
    		if(!set.count(sub))
    			set.insert(sub);
    		else
    			return true;
    	}
    	return false;
    }
};