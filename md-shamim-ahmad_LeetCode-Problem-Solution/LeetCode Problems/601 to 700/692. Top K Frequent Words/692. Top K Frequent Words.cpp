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
    vector<string> topKFrequent(vector<string> &words, int k) {
        map<string, int> mp;
        for (auto ele: words) {
            mp[ele]++;
        }
        vector<pair<string, int>> frequent;
        for (auto it: mp) {
            frequent.push_back({it.first, it.second});
        }
        sort(frequent.begin(), frequent.end(), [](auto a, auto b) {
            if (a.second == b.second)
                return a.first < b.first;
            return a.second > b.second;
        });
        vector<string> ans;
        for (int i = 0; i < k; i++)
            ans.push_back(frequent[i].first);
        return ans;
    }
};