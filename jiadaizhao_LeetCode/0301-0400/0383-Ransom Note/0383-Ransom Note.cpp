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
        if (ransomNote.size() > magazine.size()) {
            return false;
        }
        
        vector<int> table(256);
        for (char c : magazine) {
            ++table[c];
        }
        
        for (char c : ransomNote) {
            if (--table[c] < 0) {
                return false;
            }
        }
        
        return true;
    }
};
