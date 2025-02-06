#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i, j, k, start = 0, end = 0, maxlen = 0;
        unordered_map<char,int> m;
        unordered_map<char,int>::iterator it;
        for(i = 0; i < s.size(); ++i)
        {
        	it = m.find(s[i]);
        	if(it == m.end())
        	{
        		m[s[i]] = i;
        	}
        	else
        	{
        	    k = it->second;
        		for(j = start; j <= k; ++j)
        			m.erase(s[j]);
        		m[s[i]] = i;
        		start = j;
        	}
        	++end;
    		if(end-start > maxlen)
    			maxlen = end-start;
        }
        return maxlen;
    }
};
int main()
{
	Solution s;
	s.lengthOfLongestSubstring("abcabcbb");
}