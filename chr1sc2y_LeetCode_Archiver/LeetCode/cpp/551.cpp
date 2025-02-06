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
        int a = 0, l = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'L')
                ++l;
            else
                l = 0;
            if (s[i] == 'A')
                ++a;
            if (a >= 2 || l >= 3)
                return false;
        }
        return true;
    }
};