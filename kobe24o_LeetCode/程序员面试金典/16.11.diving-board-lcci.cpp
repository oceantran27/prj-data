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
    vector<int> divingBoard(int shorter, int longer, int k) {
    	if(k == 0)
    		return {};
    	if(shorter == longer)
    		return vector<int> ({k*shorter});
    	vector<int> ans(k+1);
    	int i, j = 0;
    	for(i = 0; i <= k; ++i)
    	{
    		ans[j++] = shorter*(k-i)+longer*i;
    	}
    	return ans;
    }
};