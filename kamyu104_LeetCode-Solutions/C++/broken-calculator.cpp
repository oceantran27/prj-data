#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// Time:  O(logn)
// Space: O(1)

class Solution {
public:
    int brokenCalc(int X, int Y) {
        int result = 0;
        while (X < Y) {
            if (Y % 2) {
                ++Y;
            } else {
                Y /= 2;
            }
            ++result;
        }
        return result + X - Y;
    }
};
