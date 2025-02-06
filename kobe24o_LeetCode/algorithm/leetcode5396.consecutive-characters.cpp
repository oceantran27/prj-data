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
    int maxPower(string s) {
    	int i, count = 0, maxc = 0;
    	char prev = '*';
    	for(i = 0; i < s.size(); ++i)
    	{
    		if(prev == s[i])
    			count++;
    		else
    			count = 1;
    		maxc = max(count, maxc);
    		prev = s[i];
    	}
    	return maxc;
    }
};