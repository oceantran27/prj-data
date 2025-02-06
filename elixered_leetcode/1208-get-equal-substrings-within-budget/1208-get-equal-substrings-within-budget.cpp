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
    int equalSubstring(string s, string t, int maxCost) {
        int ans = 0;
        int n = s.size();
        int i=0,j=0;
        int cost = 0;
        while(j<n)
        {
            cost += abs(s[j]-t[j]);
            while(cost>maxCost && i<=j)
            {
                cost -= abs(s[i]-t[i]);
                i++;
            }
            if(cost<=maxCost)
                ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};