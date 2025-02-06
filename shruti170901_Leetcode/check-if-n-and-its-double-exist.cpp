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
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> lookup;
        for (const auto& x : arr) {
            if (lookup.count(2 * x) ||
                (x % 2 == 0 && lookup.count(x / 2))) {
                return true;
            }
            lookup.emplace(x);
        }
        return false;
    }
};
