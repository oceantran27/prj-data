#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 520 Detect Capital.cpp

class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap_cnt = 0;
        for (char ch : word) {
            if (isupper(ch)) {
                cap_cnt++;
            }
        }
        return cap_cnt == 0 ||
            cap_cnt == 1 && isupper(word[0]) ||
            cap_cnt == word.size();
    }
};