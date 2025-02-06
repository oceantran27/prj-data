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
        //存起点
        unordered_set<string> start;
        for (vector<string> &i:paths)
            start.insert(i.at(0));
        for (vector<string> &i:paths)
            if (start.find(i.at(1))==start.end())
                return i.at(1);
        return "";
    }
};
