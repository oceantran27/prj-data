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
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mm;
        unordered_map<char, int> rm;

        for (auto ch: magazine) {
            mm[ch]++;
        }

        for (auto ch: ransomNote) {
            rm[ch]++;
        }

        for (auto r: rm) {
            if (mm[r.first] < r.second) {
                return false;
            }
        }

        return true;
    }
};