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
    int reverse(int x) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        
        bool minus = false;
        if (x < 0) {
            x = -x;
            minus = true;
        }
        int res = 0;
        while (x) {
            res *= 10;
            res += x % 10;
            x /= 10;
        }
        return minus ? (-res) : res;
    }
};
