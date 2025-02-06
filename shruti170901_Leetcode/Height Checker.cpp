#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/height-checker/

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int i, ans=0;
        vector<int> v=heights;
        sort(v.begin(), v.end());
        for(i=0;i<v.size();i++){
            if(v[i]!=heights[i]) ans++;
        }
        return ans;
    }
};