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
    int closestToTarget(vector<int>& arr, int target) 
    {
        set<int>Set, temp;
        int ret = INT_MAX;
        for (int x: arr)
        {
            for (auto y: Set)
                temp.insert(y&x);
            temp.insert(x);

            for (int y: temp)
                ret = min(ret, abs(y-target));
            
            Set = temp;
            temp.clear();
        }

        return ret;
    }
};
