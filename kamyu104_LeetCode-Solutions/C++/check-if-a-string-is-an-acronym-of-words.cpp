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

// string
class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        if (size(words) != size(s)) {
            return false;
        }
        for (int i = 0; i < size(words); ++i) {
            if (words[i][0] != s[i]) {
                return false;
            }
        }
        return true;
    }
};
