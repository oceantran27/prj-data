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
    int leastBricks(vector<vector<int>>& wall) {
        if(wall.size() == 0 || wall[0].size() == 0) return 0;
        unordered_map<int, int>m;
        for(auto x: wall){
            int len = 0;
            for(int i = 0; i < x.size() - 1; i++){
                len += x[i];
                m[len]++;
            }
        }
        int n = wall.size();
        int res = n;
        for(auto x: m) res = min(res, n - x.second);
        return res;
    }
};
