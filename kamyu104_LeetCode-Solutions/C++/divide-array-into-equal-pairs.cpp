#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(n)

// freq table
class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> odd;
        for (const auto& x : nums) {
            odd[x] = (odd[x] + 1) % 2;
        }
        return all_of(cbegin(odd), cend(odd), [](const auto& x) {
            return x.second == 0;
        });
    }
};
