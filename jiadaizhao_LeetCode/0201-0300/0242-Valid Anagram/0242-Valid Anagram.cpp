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
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        vector<int> table(26);
        for (char c : s) {
            ++table[c - 'a'];
        }
        
        for (char c : t) {
            if (--table[c - 'a'] < 0) {
                return false;
            }
        }
        
        return true;
    }
};
