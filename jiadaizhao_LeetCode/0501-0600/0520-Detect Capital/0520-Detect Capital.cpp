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
    bool detectCapitalUse(string word) {
        bool allUpper = false;
        bool allLower = false;
        if (islower(word[0])) {
            allLower = true;
        }
        
        for (int i = 1; i < word.size(); ++i) {
            if (islower(word[i])) {
                if (allUpper) {
                    return false;
                }
                    
                allLower = true;
            }
            else {
                if (allLower) {
                    return false;
                }
                    
                allUpper = true;
            }
        }
        
        return true;
    }
};
