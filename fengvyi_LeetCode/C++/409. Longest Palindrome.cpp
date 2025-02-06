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
    int longestPalindrome(string s) {
        int odd = 0;
        unordered_map<char, int>m;
        for(auto c: s) odd += m[c]++ % 2 ? -1 : 1;
        return min(s.size(), s.size() - odd + 1);
    }
};
