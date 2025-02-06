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
    double quickMul(double x, long long N) {
        if (!N) return 1;
        double dTemp = quickMul(x, N / 2);
        return N % 2 ? dTemp * dTemp * x : dTemp * dTemp;
    }
    double myPow(double x, int n) {
        long long N = n;
        return N >= 0 ? quickMul(x, N) : 1 / quickMul(x, -N);    
    }
};