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
    int minSteps(string s, string t) {
        unordered_map<char, int> cs;
        unordered_map<char, int> ct;
        
        for (char c:s) {
            cs[c]++;
        }
        for (char c:t) {
            ct[c]++;
        }
        int cnt = 0;
        for (auto e: cs) {
            if (e.second > ct[e.first]) cnt += e.second - ct[e.first];
        }
        
        return cnt;
    }
};