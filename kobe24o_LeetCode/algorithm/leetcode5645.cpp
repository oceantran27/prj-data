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
    int largestAltitude(vector<int>& gain) {
        int h = 0, maxh = 0;
        for(auto g : gain)
        {
            h += g;
            maxh = max(maxh, h);
        }
        return maxh;
    }
};