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
    int largestCombination(vector<int>& candidates) 
    {
        int ret = 0;
        for (int i=0; i<31; i++)
        {
            int count = 0;
            for (int x: candidates)
            {
                if ((x>>i)&1)
                    count++;
            }
            ret = max(ret, count);
        }
        return ret;        
    }
};
