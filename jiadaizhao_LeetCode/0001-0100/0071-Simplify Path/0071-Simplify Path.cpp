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
    string simplifyPath(string path) {
        int n = path.size();
        vector<string> St;
        int start = 0, end = 0;
        while (end < n) {
            while (end < n && path[end] != '/') {
                ++end;
            }
            string s= path.substr(start, end - start);
            if (s == "..") {
                if (!St.empty()) {
                    St.pop_back();
                }
            }
            else if (s != "" && s != ".") {
                St.push_back(s);
            }
            start = ++end;
        }
        
        if (St.empty()) {
            return "/";
        }
        string result;
        for (string s : St) {
            result += "/" + s;
        }
        return result;
    }
};
