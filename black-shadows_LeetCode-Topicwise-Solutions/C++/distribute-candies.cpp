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
    int distributeCandies(vector<int>& candies) {
        unordered_set<int> lookup;
        for (const auto& candy: candies) {
            lookup.emplace(candy);
        }
        return min(lookup.size(), candies.size() / 2);
    }
};
