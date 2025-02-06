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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mask;
        for (int &i:nums)
            ++mask[i];
        priority_queue<pair<int,int>,vector<pair<int,int>>,less<pair<int,int>>> sorted_mask;
        for (auto &i:mask)
            sorted_mask.push(make_pair(i.second,i.first));
        vector<int> ans;
        ans.reserve(k);
        for (int i=0;i<k;++i)
        {
            ans.push_back(sorted_mask.top().second);
            sorted_mask.pop();
        }
        return ans;
    }
};
