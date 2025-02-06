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
    int lengthOfLongestSubstring(string s) {
        vector<int> pos(200, -1);
        int start = 0, res = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (pos[s[i]] != -1) {
                res = max(res, i - start);
                start = max(start, pos[s[i]] + 1);
            }
            pos[s[i]] = i;
        }
        res = max(res, static_cast<int>(s.size()) - start);
        return res;
    }
};
