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
    bool isPalindrome(string s) {
        int n = s.size();        
        int start = 0, end = n - 1;
        while (start < end) {
            while (start < end && !isalnum(s[start])) {
                ++start;
            }
            while (start < end && !isalnum(s[end])) {
                --end;
            }
            if (start < end) {
                if (tolower(s[start]) != tolower(s[end])) {
                    return false;
                }
                ++start;
                --end;
            }            
        }
        
        return true;
    }
};
