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
    int maxChunksToSorted(vector<int>& arr) {
    	int i, maxnum = 0, split = 0;
    	for(i = 0; i < arr.size(); ++i)
    	{
    		maxnum = max(maxnum, arr[i]);
    		if(maxnum == i)
    			split++;
    	}
    	return split;
    }
};