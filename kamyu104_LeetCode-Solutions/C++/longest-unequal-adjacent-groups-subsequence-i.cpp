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

// greedy
class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        vector<string> result = {words[0]};
        for (int i = 1; i < n; ++i) {
            if (groups[i] != groups[i - 1]) {
                result.emplace_back(words[i]);
            }
        }
        return result;
    }
};
