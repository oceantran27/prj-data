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
    int largestUniqueNumber(vector<int>& A) {
    	unordered_map<int,int> m;
    	for(int a : A)
    		m[a]++;
    	int ans = INT_MIN;
    	for(auto it = m.begin(); it != m.end(); ++it)
    		if(it->second == 1)
    			ans = max(ans, it->first);
		return ans==INT_MIN ? -1 : ans;
    }
};