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
    double myPow(double x, int n) {        
        long long nc = n;
        if (nc < 0) {
            nc = -nc;
            x = 1 / x;
        }
        
        double result = 1;
        while (nc) {
            if (nc & 1) {
                result *= x;
            }            
            x *= x;
            nc >>= 1;
        }
        
        return result;
    }
};
