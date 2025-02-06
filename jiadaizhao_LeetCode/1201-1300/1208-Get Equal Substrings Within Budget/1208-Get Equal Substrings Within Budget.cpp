#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int start = 0, cost = 0, maxLen = 0;
        for (int i = 0; i < s.size(); ++i) {
            cost += abs(s[i] - t[i]);
            if (cost > maxCost) {
                cost -= abs(s[start] - t[start]);
                ++start;
            }
        }

        return s.size() - start;
    }
};
