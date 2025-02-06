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
    int findTheLongestSubstring(string s) {
        unordered_map<int, int> table{{0, -1}};
        int maxLen = 0, curr = 0;
        string candidate = "aeiou";
        for (int i = 0; i < s.size(); ++i) {
            int index = candidate.find(s[i]);
            if (index != string::npos) {
                curr ^= 1 << index;
            }
            if (!table.count(curr)) {
                table[curr] = i;
            }
            else {
                maxLen = max(maxLen, i - table[curr]);
            }            
        }
        return maxLen;
    }
};
