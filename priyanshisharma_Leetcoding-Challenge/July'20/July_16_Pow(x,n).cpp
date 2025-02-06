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
        
        if(n==1)
            return x;

        if(n==0)
            return 1;
        
        if(n<0)
            return (1/(x*myPow(x, -1*(n + 1))));
        
        return (n%2==0)?myPow(x*x,n/2):x*myPow(x,n-1);
    }
};
