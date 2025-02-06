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
// Space: O(1)

// array
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        return accumulate(cbegin(hours), cend(hours), 0, [&](const auto& accu, const auto& x) {
            return accu + (x >= target ? 1 : 0);
        });
    }
};
