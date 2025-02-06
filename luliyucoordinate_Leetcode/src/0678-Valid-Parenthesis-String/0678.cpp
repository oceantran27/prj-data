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
    bool checkValidString(string s) {
        int a = 0, b = 0;
        for (auto& c : s) {
            if (c == '(') a++, b++;
            else if (c == ')') {
                b--;
                a = max(--a, 0);
                if (b < 0) return false;
            } else {
                a = max(--a, 0);
                b++;
            }
        }
        return a == 0;
    }
};