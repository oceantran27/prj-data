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
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        while (tx >= sx && ty >= sy) {
            if (tx > ty) {
                if (ty == sy) {
                    return (tx - sx) % ty == 0;
                }
                else {
                    tx %= ty;
                }
            }
            else {
                if (tx == sx) {
                    return (ty - sy) % tx == 0;
                }
                else {
                    ty %= tx;
                }              
            }
        }
        
        return false;
    }
};
