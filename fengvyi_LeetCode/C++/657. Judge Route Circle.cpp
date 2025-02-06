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
    bool judgeCircle(string moves) {
        int v = 0, h = 0;
        unordered_map<char, int>m{{'R', 1}, {'L', -1}, {'U', -1}, {'D', 1}};
        for(auto x: moves)
            if(x == 'L' || x == 'R') h += m[x];
            else v += m[x];
        return v == 0 && h == 0;
    }
};
