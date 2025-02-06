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
    string removeKdigits(string num, int k) {
        string result;
        vector<char> St;
        for (int i : num) {
            while (!St.empty() && i < St.back() && k) {
                St.pop_back();
                --k;
            }
            St.push_back(i);
        }
        
        for (int i = 0; i < St.size() - k; ++i) {
            if (result.size() || St[i] != '0') {
                result += St[i];
            }
        }
        
        return result.size() ? result : "0";
    }
};
