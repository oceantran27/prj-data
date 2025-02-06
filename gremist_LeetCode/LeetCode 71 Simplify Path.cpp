#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 71 Simplify Path.cpp

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        istringstream iss(path);
        string buf;
        while (getline(iss, buf, '/')) {
            if (!buf.empty() && buf != "." && buf != "..") {
                v.push_back(buf);
            } else if (!v.empty() && buf == "..") {
                v.pop_back();
            }
        }
        if (v.empty()) {
            return "/";
        }

        buf.clear();
        for (string &s : v) {
            buf += "/";
            buf += s;
        }
        return buf;
    }
};