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

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> count;
        for (const auto& num : nums) {
            ++count[num];
        }
        return accumulate(cbegin(count), cend(count), 0,
                          [](const auto& total, const auto& p) {
                              return total + (p.second == 1 ? p.first : 0);
                          });
    }
};
