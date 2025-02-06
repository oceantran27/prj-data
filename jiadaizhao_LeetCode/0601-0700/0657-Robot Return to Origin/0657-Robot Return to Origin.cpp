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
        int x = 0, y = 0;
        for (char c : moves) {
            if (c == 'R') {
                ++x;
            }
            else if (c == 'L') {
                --x;
            }
            else if (c == 'U') {
                ++y;
            }
            else {
                --y;
            }
        }
        
        return x == 0 && y == 0;
    }
};
