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
    vector<int> findBuildings(vector<int>& heights) {
        vector<int>stk;
        for(int i = 0; i < heights.size(); ++i){
            while(!stk.empty() && heights[stk.back()] <= heights[i]){
                stk.pop_back();
            }
            stk.push_back(i);
        }
        return stk;
    }
};