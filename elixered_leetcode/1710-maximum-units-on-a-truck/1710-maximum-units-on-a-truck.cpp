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
    int maximumUnits(vector<vector<int>>& boxes, int sz) {
        auto cmp = [](vector<int>& a, vector<int>& b){
            return a[1] > b[1];
        };
        sort(begin(boxes),end(boxes),cmp);
        int ans = 0;
        for(auto it:boxes){
            int req = min(sz,it[0]);
            sz -= req;
            ans += req*it[1];
            if(sz == 0) break;
        }
        return ans;
    }
};