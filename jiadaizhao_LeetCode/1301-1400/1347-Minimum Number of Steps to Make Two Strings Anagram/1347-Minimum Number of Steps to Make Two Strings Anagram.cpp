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
    int minSteps(string s, string t) {
        vector<int> table(26);
        for (int i = 0; i < s.size(); ++i) {
            ++table[s[i] - 'a'];
            --table[t[i] - 'a'];
        }
        int step = 0;
        for (int i = 0; i < 26; ++i) {
            if (table[i] > 0) {
                step += table[i];
            }
        }
        return step;
    }
};
