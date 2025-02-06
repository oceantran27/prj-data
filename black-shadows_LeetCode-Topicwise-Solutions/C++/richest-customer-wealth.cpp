#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(m * n)
// Space: O(1)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int result = 0;
        for (const auto& account : accounts) {
            int total = accumulate(cbegin(account), cend(account), 0);
            result = max(result, total);
        }
        return result;
    }
};
