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
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;
        string ans = ""; 
        for (int i = 0; i < numRows; i++) { //第i行
            for (int j = i; j < s.length (); j += 2*numRows-2) { //当前下标是j
                ans += s[j];
                if (i == 0 || i == numRows-1) {}
                else if (2*numRows-2-2*i+j < s.length ()) ans += s[2*numRows-2-2*i+j];
            }
        }
        return ans;
    }
};
