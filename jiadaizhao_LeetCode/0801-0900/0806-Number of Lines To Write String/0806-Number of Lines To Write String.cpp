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
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int line = 0, i = 0, n = S.size(), last = 0;
        while (i < n) {
            ++line;
            int curr = 0;
            while (i < n && curr + widths[S[i] - 'a'] <= 100) {
                curr += widths[S[i] - 'a'];
                ++i;
            }
            last = curr;
        }
        return {line, last};
    }
};
