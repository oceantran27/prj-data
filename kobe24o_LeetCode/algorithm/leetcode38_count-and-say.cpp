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
    string countAndSay(int n) {
        string ans("1"), str;
        int i, count = 0;
        char prev;
        while(--n)
        {
        	prev = ans[0];
        	count = 1;
        	for(i = 1; i < ans.size(); ++i)
        	{
        		if(ans[i] == prev)
        		{
        			count++;
        		}
        		else
        		{
        			str.push_back(count+'0');
        			while(count--)
        				str.push_back(prev);
        			prev = ans[i];
        			count = 1;
        		}
        		if(i == ans.size()-1)
        		{
        			str.push_back(count+'0');
        			while(count--)
        				str.push_back(prev);
        		}
        	}
        	ans = str;
        	str = "";
        }
        return ans;
    }
};