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
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0, j = 0;
        int num = 0;
        while (i < word.size() && j < abbr.size()) {
            if (isdigit(abbr[j])) {
                num = num * 10 + abbr[j] - '0';
                if (num == 0) {
                    return false;
                }                                
            }
            else {
                i += num;
                if (i >= word.size() || word[i] != abbr[j]) {
                    return false;
                }
                
                num = 0;
                ++i;
            }
            ++j;
        }
        
        i += num;
        return i == word.size() && j == abbr.size();
    }
};
