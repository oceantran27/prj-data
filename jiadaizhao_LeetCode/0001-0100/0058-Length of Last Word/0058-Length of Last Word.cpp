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
        int n = s.size(), end = n - 1, count = 0;
        while (end >= 0 && s[end] == ' ') {
            --end;
        }
        
        while (end >= 0 && s[end] != ' ') {
            ++count;
            --end;
        }
        
        return count;
    }
};
