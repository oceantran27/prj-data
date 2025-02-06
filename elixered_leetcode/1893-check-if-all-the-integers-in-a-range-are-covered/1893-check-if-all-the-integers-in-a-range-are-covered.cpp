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
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int> range(52,0);
        for(auto& it:ranges)
        {
            range[it[0]]++;
            range[it[1]+1]--;
        }
        for(int i=1; i<52; i++)
            range[i] += range[i-1];
        for(int i=left; i<=right; i++)
        {
            if(range[i]<=0)
                return false;
        }
        return true;
    }
};