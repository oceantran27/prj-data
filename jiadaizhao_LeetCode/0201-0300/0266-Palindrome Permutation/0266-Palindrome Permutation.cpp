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
    bool canPermutePalindrome(string s) {
        vector<int> table(128);
        for (char c : s) {
            ++table[c];
        }
        
        int odd = 0;
        for (int i : table) {
            if (i % 2) {
                ++odd;
                if (odd > 1) {
                    return false;
                }
            }
        }
        
        return true;
    }
};
