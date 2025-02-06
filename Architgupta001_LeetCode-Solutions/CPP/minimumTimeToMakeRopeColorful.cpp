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
    int minCost(string colors, vector<int>& neededTime) {
        int ans = neededTime[0], mx = neededTime[0];
        for(int i = 1; i < colors.size(); i++) {
            if(colors[i]!=colors[i-1]) {
                ans -= mx;
                mx = 0;
            }
            ans += neededTime[i];
            mx = max(mx, neededTime[i]);
        }

        ans -= mx;

        return ans;
    }
};