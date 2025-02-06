#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
using namespace std;

// LeetCode 50 Pow(x, n).cpp

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1;
        if (n  < 0) {
            x = 1 / x;
        }
        double p = myPow(x, abs(n / 2));
        return n % 2 ? p * p * x : p * p;
    }
};