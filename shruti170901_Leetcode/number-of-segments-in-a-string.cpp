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

class Solution {
public:
    int countSegments(string s) {
        int result = static_cast<int>(!s.empty() && s.back() != ' ');
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] == ' ' && s[i - 1] != ' ') {
                ++result;
            }
        }
        return result;
    }
};
