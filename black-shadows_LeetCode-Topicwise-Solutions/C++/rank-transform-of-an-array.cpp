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
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> lookup{arr.cbegin(), arr.cend()};
        unordered_map<int, int> rank;
        for (const auto& v : lookup) {
            rank[v] = rank.size() + 1;
        }
        vector<int> result;
        transform(arr.cbegin(), arr.cend(), back_inserter(result),
                  [&rank](const auto& v) {
                      return rank[v];
                  });
        return result;
    }
};
