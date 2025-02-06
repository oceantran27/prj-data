#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(nlogn)
// Space: O(n)

class Solution {
public:
    int findMaximizedCapital(int k, int W, vector<int>& Profits, vector<int>& Capital) {
        vector<pair<int, int>> future;
        for (int i = 0; i < Profits.size(); ++i) {
            future.emplace_back(Capital[i], Profits[i]);
        }
        sort(future.begin(), future.end(), greater<pair<int, int>>());

        priority_queue<int> curr;
        while (k--) {
            while (!future.empty() && future.back().first <= W) {
                curr.emplace(future.back().second);
                future.pop_back();
            }
            if (!curr.empty()) {
                W += curr.top();
                curr.pop();
            }
        }
        return W;
    }
};
