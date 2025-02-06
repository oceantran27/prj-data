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
    int numberOfSubstrings(string s) {
        int total = 0;
        int ai = -1, bi = -1, ci = -1;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'a') {
                ai = i;
            }
            else if (s[i] == 'b') {
                bi = i;
            }
            else {
                ci = i;
            }
            
            total += min({ai, bi, ci}) + 1;
        }
        
        return total;
    }
};
