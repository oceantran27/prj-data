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
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(heaters.begin(),heaters.end());
        int ans = 0;
        for(auto& it:houses)
        {
            int idx = lower_bound(heaters.begin(),heaters.end(),it)-heaters.begin();
            int res = INT_MAX;
            if(idx!=heaters.size())
                res = min(res,abs(heaters[idx]-it));
            idx--;
            if(idx>=0)
                res = min(res,abs(heaters[idx]-it));
            ans = max(ans,res);
        }
        return ans;
    }
};