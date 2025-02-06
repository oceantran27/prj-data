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
    string reverseStr(string s, int k) {
    	int i = 0;
        while(i < s.size())
        {
    		if(i+k <= s.size())
    		{
    			revStr(s,i,i+k-1);
    		}
    		else
    			revStr(s,i,s.size()-1);
			i += 2*k;
        }
        return s;
    }

    void revStr(string &s, int i, int j)
    {
    	while(i < j)
    		swap(s[i++],s[j--]);
    }
};