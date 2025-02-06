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
        string ret;
        int cnt = 0;
        for (int i = S.size() - 1; i >= 0; --i) {
            char c = S[i];
            if (c != '-') {
                c = toupper(c);
                ret.push_back(c);
                ++cnt;
                if (cnt == K) {
                    cnt = 0;
                    ret.push_back('-');
                }
            }
        }
        if (ret.back() == '-') ret.pop_back();
        reverse(ret.begin(), ret.end());
        return ret;
    }
};