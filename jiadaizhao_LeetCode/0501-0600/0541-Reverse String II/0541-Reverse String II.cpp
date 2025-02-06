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
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2 * k) {
            int end = min(i + k, (int)(s.size()));
            reverse(s.begin() + i, s.begin() + end);
        }
        
        return s;
    }
};
