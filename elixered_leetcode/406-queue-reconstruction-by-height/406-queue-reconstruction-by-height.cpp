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
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        auto cmp = [&](vector<int>& a, vector<int>& b){
            return a[0] == b[0] ? a[1] < b[1] : a[0] > b[0];
        };
        sort(begin(people),end(people),cmp);
        int n = people.size();
        vector<vector<int>> ans;
        for(auto man : people){
            ans.insert(ans.begin()+man[1], man); 
        }
        return ans;
    }
};