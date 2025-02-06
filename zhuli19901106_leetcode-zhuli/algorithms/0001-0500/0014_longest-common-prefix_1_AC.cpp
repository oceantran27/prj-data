#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 0) {
            return "";
        }
        string res = strs[0];
        int i, j;
        int len;
        for (i = 1; i < n; ++i) {
            len = res.size();
            for (j = 0; j < len; ++j) {
                if (strs[i][j] != res[j]) {
                    res.resize(j);
                    break;
                }
            }
        }
        return res;
    }
};
