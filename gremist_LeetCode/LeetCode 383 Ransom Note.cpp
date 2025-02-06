#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 383 Ransom Note.cpp

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) return false;
        vector<int> ht(26);
        for (char ch : magazine) {
            ht[ch - 'a']++;
        }
        for (char ch : ransomNote) {
            if (--ht[ch - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};