#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>

#include <string>
#include <set>

using namespace std;

class Solution {
public:
    int secondHighest(string s) {
        set<int> setting;
        for(char ch: s)
        {
            if(ch >= '0' && ch <= '9')
                setting.insert(ch);
        }
        if(setting.empty() || setting.size() == 1)
            return -1;
        auto it = setting.begin();
        ++it;
        return *it - '0';
    }
};
