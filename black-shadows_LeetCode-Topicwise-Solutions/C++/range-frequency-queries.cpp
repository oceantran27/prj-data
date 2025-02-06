#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  ctor:  O(n)
//        query: O(logn)
// Space: O(n)

class RangeFreqQuery {
public:
    RangeFreqQuery(vector<int>& arr) {
        for (int i = 0; i < size(arr); ++i) {
            idxs_[arr[i]].emplace_back(i);
        }
    }
    
    int query(int left, int right, int value) {
        const auto& arr = idxs_[value];
        return upper_bound(cbegin(arr), cend(arr), right) -
               lower_bound(cbegin(arr), cend(arr), left);
    }

private:
    unordered_map<int, vector<int>> idxs_;
};
