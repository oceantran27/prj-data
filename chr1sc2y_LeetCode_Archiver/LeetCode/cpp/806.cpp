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
    vector<int> numberOfLines(vector<int> &widths, string &S) {
        int line = 1, width = 0;
        for (auto s:S) {
            if (width + widths[s - 'a'] <= 100)
                width += widths[s - 'a'];
            else {
                width = widths[s - 'a'];
                ++line;
            }
        }
        return vector<int>{line, width};
    }
};
