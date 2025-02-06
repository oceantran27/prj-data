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
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1);
        int i, j;
        ans[0] = 1;
        for(i = 1; i <= rowIndex; ++i)
        {
        	ans[i] = 1;
        	for(j = i-1; j > 0; --j)
        		ans[j] += ans[j-1];
        }
        return ans;
    }
};