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
    string freqAlphabets(string s) {
        string result;
        unordered_map<string, string> table;       
        for (int i = 0; i < s.size(); ++i) {
            if (i + 2 < s.size() && s[i + 2] == '#') {
                result += 'j' + (s[i] - '1') * 10 + s[i + 1] - '0';
                i += 2;
            }
            else {
                result += 'a' + s[i] - '1';
            }
        }
        
        return result;
    }
};
