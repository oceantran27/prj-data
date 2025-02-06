#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// medium
#include <cmath>
using std::sqrt;

class Solution {
public:
    bool judgeSquareSum(int c) {
        int i, j;
        for (i = 0; 2LL * i * i <= c; ++i) {
            j = (int)sqrt(c - i * i);
            if (j * j == c - i * i) {
                return true;
            }
        }
        return false;
    }
};
