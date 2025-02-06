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
    vector<int> findPermutation(string s) {
        vector<int> result;
        for (int i = 0; i <= s.length(); ++i) {
            if (i == s.length() || s[i] == 'I') {
                const int k = result.size();
                for (int j = i + 1; j > k; --j) {
                    result.emplace_back(j);
                }
            }
        }
        return result;
    }
};
