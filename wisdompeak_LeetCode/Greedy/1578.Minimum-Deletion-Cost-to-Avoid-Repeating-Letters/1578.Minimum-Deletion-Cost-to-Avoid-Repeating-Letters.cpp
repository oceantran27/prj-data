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
    int minCost(string s, vector<int>& cost) 
    {
        int ret = 0;
        for (int i=0; i<s.size();)
        {
            int j=i;
            int maxValue = 0;
            int sum = 0;
            while (j<s.size() && s[j]==s[i])
            {
                sum += cost[j];
                maxValue = max(maxValue, cost[j]);
                j++;
            }
            ret += sum - maxValue;
            i = j;
        }
        return ret;

    }
};
