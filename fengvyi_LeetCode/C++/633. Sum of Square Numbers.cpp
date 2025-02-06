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
        for(int a = 0, b = sqrt(c); a <= sqrt(c); a++, b = sqrt(c - a * a))
            if(b * b == c - a * a) return true;
        return false;
    }
};
