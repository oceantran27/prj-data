#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// 455ַ

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
         int sp = 0, gp = 0;      // pointer in s and g
         int num = 0;
         int glen = g.size();
         int slen = s.size();
         
         if (g.empty() || s.empty()) {
             return 0;
         }
         
         sort(s.begin(), s.end());
         sort(g.begin(), g.end());
         
         while (sp < slen && gp < glen) {
             if (s[sp] < g[gp]) {
                 sp++;
             } else {
                 sp++;
                 gp++;
                 num++;
             }
         }
         
         return num;
    }
};
