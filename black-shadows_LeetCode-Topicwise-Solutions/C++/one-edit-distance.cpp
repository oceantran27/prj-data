#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(m + n)
// Space: O(1)

class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        const int m = s.length(), n = t.length();
        if (m > n) {
            return isOneEditDistance(t, s);
        }
        if (n - m > 1) {
            return false;
        }
        
        int i = 0, shift = n - m;
        while (i < m && s[i] == t[i]) {
            ++i;
        }
        if (shift == 0) {
            ++i;
        }
        while (i < m && s[i] == t[i + shift]) {
            ++i;
        }
            
        return i == m;
    }
};
