#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 58 Length of Last Word.cpp

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        for (int i = s.size(); i >= 0; i--) {
            if (isalpha(s[i])) {
                len++;
            } else if (len > 0) {
                break;
            }
        }
        return len;
    }
};