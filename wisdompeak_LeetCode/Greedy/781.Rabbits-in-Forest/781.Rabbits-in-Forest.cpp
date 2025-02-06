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
    int numRabbits(vector<int>& answers) 
    {
        unordered_map<int,int>Map;
        for (int x: answers)
            Map[x]++;

        int ret = 0;
        for (auto x: Map)
        {
            int k = (x.second - 1) / (x.first + 1) + 1;
            ret += k * (x.first+1);
        }
        return ret;
    }
};
