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
        int n = s.length();
        int res = 0,bit = 1;
        for(int i = n-1; i >= 0; i--)
        {
            res += (s[i] - 'A' + 1) * bit;
            bit *= 26;
        }
        return res;
    }
};

