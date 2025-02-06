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
    int lengthOfLastWord(string s) {
        // int max = 0;
        int len = 0;
        int lastLen = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (len>0) lastLen = len;
                len = 0;
            } else {
                len++;
            }
        }
        if (len == 0) len = lastLen;
        return len;
    }
};