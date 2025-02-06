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
    bool canWin(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (i+1<s.size() && s[i] == '+' && s[i+1] == '+') {
                string tmp = s;
                tmp[i] = '-';
                tmp[i+1] = '-';
                if (!canWin(tmp)) return true;
            }
        }

        return false;
    }
};