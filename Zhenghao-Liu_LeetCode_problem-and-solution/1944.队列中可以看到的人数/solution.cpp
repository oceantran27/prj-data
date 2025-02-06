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
    vector<int> canSeePersonsCount(vector<int>& hei) {
        int sz=hei.size();
        vector<int> ans(sz);
        stack<int> sta;
        for (int i=sz-1;i>=0;i--) {
            int cur=hei.at(i);
            while (!sta.empty() && cur>=sta.top()) {
                sta.pop();
                ans.at(i)++;
            }
            if (!sta.empty()) {
                ans.at(i)++;
            }
            sta.push(cur);
        }
        return ans;
    }
};