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
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> s;
        for (auto& path : paths) s.insert(path[0]);
        for (auto& path : paths) {
            if (!s.count(path[1])) return path[1];
        }
        return "";
    }
};