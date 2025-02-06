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
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> count;
        for (const auto& x : nums) {
            ++count[x];
        }
        sort(begin(nums), end(nums),
             [&count](const auto& a, const auto& b) {
                 return count[a] == count[b] ? a > b : count[a] < count[b];
             });
        return nums;
    }
};
