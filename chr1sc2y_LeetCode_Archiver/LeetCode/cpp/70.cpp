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
    int climbStairs(int n) {
        if (n < 2) return 1;
        if (n == 2) return 2;
        int prev = 1, last = 2, sum;
        for (int i = 3; i <= n; ++i) {
            sum = prev + last;
            prev = last;
            last = sum;
        }
        return sum;
    }
};