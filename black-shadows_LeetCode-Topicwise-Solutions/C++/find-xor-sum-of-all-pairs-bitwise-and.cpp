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

class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        const auto& op = [](int total, int x) { return total ^ x; };
        return accumulate(cbegin(arr1), cend(arr1), 0, op) &
               accumulate(cbegin(arr2), cend(arr2), 0, op);
    }
};
