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
        vector<int> ans;
        int maxi = 0;
        for(int i=heights.size()-1; i>=0; i--){
            if(heights[i] > maxi){
                ans.push_back(i);
                maxi = heights[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};