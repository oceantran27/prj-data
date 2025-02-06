#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// easy
class Solution {
public:
    int titleToNumber(string s) {
        const int R = 26;
        int res = 1;
        int i;
        int n = s.size();
        int b = 1;
        
        for (i = 1; i < n; ++i) {
            b *= R;
            res += b;
        }
        b = 0;
        for (i = 0; i < n; ++i) {
            b = b * R + (s[i] - 'A');
        }
        res += b;
        return res;
    }
};
