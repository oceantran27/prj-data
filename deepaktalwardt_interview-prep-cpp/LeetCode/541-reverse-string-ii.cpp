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
    void swap(string& s, int i, int j) {
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }
    
    string reverseStr(string s, int k) {
        if (k == 1) return s;
        for (int i = 0; i < s.size(); i += 2*k) {
            int firstIdx = i;
            int lastIdx = i + k - 1 < s.size() ? i + k - 1 : s.size() - 1;
            while (firstIdx < lastIdx) {
                swap(s, firstIdx++, lastIdx--);
            }
        }
        return s;
    }
};