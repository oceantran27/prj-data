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
    bool checkRecord(string s) {
        int L = 0;
        int A = 0;
        for (auto c: s) {
            if (c == 'A') A++;
            if (c == 'L') L++;
            if (c != 'L') L = 0;
            if (L > 2) return false;
            if (A > 1) return false;
        }
        return true;
    }
};