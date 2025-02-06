#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
using namespace std;

// easy
#include <algorithm>
#include <string>
using std::reverse;
using std::string;

class Solution {
public:
    string reverseStr(string s, int k) {
        int ls = s.size();
        int i, j;
        for (i = 0; i < ls; i += 2 * k) {
            reverse(s.begin() + i, s.begin() + i + min(k, ls - i));
        }
        
        return s;
    }
};
