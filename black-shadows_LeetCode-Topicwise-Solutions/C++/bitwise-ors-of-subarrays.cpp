#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(32 * n)
// Space: O(1)

class Solution {
public:
    int subarrayBitwiseORs(vector<int>& A) {
        unordered_set<int> result, curr;
        for (const auto& i: A) {
            unordered_set<int> next{i};
            for (const auto& j : curr) {
                next.emplace(i | j);
            }
            curr = move(next);
            for (const auto& j : curr) {
                result.emplace(j);
            }
        }
        return result.size();
    }
};
