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
    string compressString(string S) {
    	if(S.size()<2)
    		return S;
    	char prev = S[0];
    	int i, count = 1;
    	string ans;
    	for(i = 1; i < S.size(); ++i)
    	{
    		if(S[i] == prev)
    			count++;
    		else
    		{
    			ans += prev+to_string(count);
    			count = 1;
    			prev = S[i];
    		}
    		if(i == S.size()-1)
    			ans += prev+to_string(count);
			if(ans.size() >= S.size())
				return S;
    	}
    	return ans;
    }
};