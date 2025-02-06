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
    int maximumWealth(vector<vector<int>>& accounts) {
    	int maxsum = 0, sum = 0;
    	for(int i = 0; i < accounts.size(); ++i)
    	{
    		sum = 0;
    		for(int j = 0; j < accounts[i].size(); ++j)
    			sum += accounts[i][j];
    		maxsum = max(maxsum, sum);
    	}
    	return maxsum;
    }
};