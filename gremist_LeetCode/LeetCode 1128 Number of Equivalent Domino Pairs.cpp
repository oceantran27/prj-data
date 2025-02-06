#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 1128 Number of Equivalent Domino Pairs.cpp

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int ans = 0;
        vector<int> ht(100);
        for (vector<int> &d : dominoes) {
            ans += ht[10 * min(d[0], d[1]) + max(d[0], d[1])]++;
        }
        return ans;
    }
};