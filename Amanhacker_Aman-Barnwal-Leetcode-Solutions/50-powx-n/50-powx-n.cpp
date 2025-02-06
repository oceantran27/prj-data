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
    
        if(n == 0)                          return 1;
        
        if(n < 0) {
            return 1/x * myPow(1/x, -(n + 1));
        }
        
        if(n % 2 == 0)                      return myPow(x * x, n / 2);
        else                                return x * myPow(x * x, n / 2);
    }
    
};