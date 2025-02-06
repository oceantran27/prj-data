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
    int maxJump(vector<int>& stones) 
    {
        int n = stones.size();
        
        if (n==2)
            return stones[1];        
        
        int ret = 0;
        for (int i=0; i+2<n; i++)
            ret = max(ret, stones[i+2]-stones[i]);
        return ret;        
    }
};
