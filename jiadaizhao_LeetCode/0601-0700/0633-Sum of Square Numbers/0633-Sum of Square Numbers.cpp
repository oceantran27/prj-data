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
    bool judgeSquareSum(int c) {
        for (long a = 0; a * a <= c; ++a) {
            int b2 = c - a * a;
            int root = sqrt(b2);
            if (root * root == b2) {
                return true;
            }
        }
        
        return false;
    }
};
