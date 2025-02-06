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
        if(numRows == 1) return s;
        vector<string>v(numRows, "");
        int d = 1;
        int row = 0;
        for(auto c: s){
            v[row].push_back(c);
            row += d;
            if(row == numRows - 1) d = -1;
            if(row == 0) d = 1;
        }
        string res;
        for(auto x: v) res.append(x);
        return res;
    }
};
