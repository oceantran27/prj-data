#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    int lastStoneWeightII(vector<int>& stones) 
    {
        int sum = accumulate(stones.begin(), stones.end(), 0);
        vector<int> mem(sum/2+1, 0);
        mem[0] = 1;
        for (int i : stones) 
        {
            for (int j = sum/2; j >= i; --j) mem[j] |= mem[j - i];
        }
        
        for (int i = sum/2; i >= 0; --i) 
            if (mem[i]) return sum - 2*i;
        return 0;
    }
};