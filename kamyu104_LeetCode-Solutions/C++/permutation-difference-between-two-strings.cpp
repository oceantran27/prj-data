#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n + 26)
// Space: O(26)

// hash table
class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> lookup(26, -1);
        for (int i = 0; i < size(s); ++i) {
            lookup[s[i] - 'a'] = i;
        }
        int result = 0;
        for (int i = 0; i < size(t); ++i) {
            result += abs(lookup[t[i] - 'a'] - i);
        }
        return result;
    }
};
