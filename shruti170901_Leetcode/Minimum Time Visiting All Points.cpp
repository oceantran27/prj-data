#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// https://leetcode.com/problems/minimum-time-visiting-all-points/

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& p) {
        int cnt=0;
        for(int i=0;i<p.size()-1;i++){
            cnt+=max(abs(p[i][0]-p[i+1][0]), abs(p[i][1]-p[i+1][1]));
        }
        return cnt;
    }
};