#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(log(max(m, n)))
// Space: O(1)

class Solution {
public:
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        while (tx >= sx && ty >= sy) {
            if (tx < ty) {
                swap(sx, sy);
                swap(tx, ty);
            }
            if (ty > sy) {
                tx %= ty;
            } else {
                return (tx - sx) % ty == 0;
            }
        }
        return false;
    }
};
