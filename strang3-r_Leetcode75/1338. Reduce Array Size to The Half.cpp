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
    int minSetSize(vector<int>& a) {
        int i, n=a.size(), size=n, ans=1;
        unordered_map<int, int> mp;
        priority_queue<pair<int, int>> pq;
        for(auto x: a) mp[x]++;
        for(auto x: mp) {
            pq.push({x.second, x.first});
        }
        while(size-pq.top().first > (n/2)) {
            size -= pq.top().first; pq.pop();
            ans++;
        }
        return ans;
    }
};