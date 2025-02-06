#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(n)
// Space: O(1)

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0;
        for (int j = 0; j < typed.length(); ++j) {
            if (i < name.length() && name[i] == typed[j]) {
                ++i;
            } else if (j == 0 || typed[j] != typed[j - 1]) {
                return false;
            }
        }
        return i == name.length();
    }
};
