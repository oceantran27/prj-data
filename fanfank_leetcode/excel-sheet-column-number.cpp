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
    int titleToNumber(string s) {
        if (s.empty()) {
            return 0;
        }

        int base = 1;
        int res  = 0;
        for (int i = s.size() - 1; i >= 0; --i, base *= 26) {
            res += base * (s[i] - 'A' + 1);
        }
        return res;
    }
};
