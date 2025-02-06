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
    string licenseKeyFormatting(string S, int K) {
        stringstream ss(S);
        string s = "", tmp = "", res = "";
        while(getline(ss, tmp, '-')) s += tmp;
        for(auto& c: s) c = toupper(c);
        int i = 0, step = (s.size() % K == 0) ? K : s.size() % K;
        while(i < s.size()){
            res += s.substr(i, step) + '-';
            i += step;
            step = K;
        }
        res.pop_back();
        return res;
    }
};
