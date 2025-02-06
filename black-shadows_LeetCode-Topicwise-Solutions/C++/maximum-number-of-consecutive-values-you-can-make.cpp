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
// Space: O(1)

class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        sort(begin(coins), end(coins));
        int result = 1;
        for (const auto& c : coins) {
            if (c > result) {
                break;
            }
            result += c;
        }
        return result;
    }
};
