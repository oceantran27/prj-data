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
        if(n == 0)  return 1;
        else{
            double tmp = myPow(x,n/2);
            tmp *= tmp;
            if(n % 2){
                if(n > 0)   tmp *= x;
                else        tmp /= x;
            }
            return tmp;
        }
    }
};

