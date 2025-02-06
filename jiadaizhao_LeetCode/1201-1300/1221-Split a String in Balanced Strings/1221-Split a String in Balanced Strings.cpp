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
    int balancedStringSplit(string s) {
        int bal = 0, num = 0;
        for (char c : s) {
            if (c == 'L') {
                ++bal;
            }
            else {
                --bal;
            }

            if (bal == 0) {
                ++num;
            }
        }

        return num;
    }
};
