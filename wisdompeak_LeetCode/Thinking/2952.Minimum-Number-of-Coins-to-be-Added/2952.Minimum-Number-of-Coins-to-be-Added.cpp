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
    int minimumAddedCoins(vector<int>& coins, int target) 
    {
        sort(coins.begin(), coins.end());
        int limit = 0;
        int i = 0;
        int ret = 0;
        while (limit < target)
        {
            if (i==coins.size() || limit+1 < coins[i])
            {
                ret++;
                limit += limit+1;
            }
            else
            {
                limit += coins[i];
                i++;
            }            
        }
        
        return ret;        
    }
};
