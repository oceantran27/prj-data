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
    bool increasingTriplet(vector<int>& nums) {
        int c1 = INT_MAX, c2 = INT_MAX;
        for(auto x: nums)
            if(x <= c1) c1 = x;
            else if(x <= c2) c2 = x;
            else return true;
        return false;
    }
};
