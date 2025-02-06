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
    string replaceSpace(string s) {
        string ans = "";

        for (auto c: s) {
            if (c == ' ') {
                ans += "%20";
            } else {
                ans += c;
            }
        }

        return ans;
    }
};